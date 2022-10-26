/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:42:40 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 14:57:59 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	number_word(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			nbr = nbr + 1;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (nbr);
}

char	*find_word(char const *s, char c, int *ind)
{
	int		i;
	char	*w;
	int		taille;

	i = (*ind);
	while (s[i] == c)
		i++;
	*ind = i;
	while (s[i] != c)
		i++;
	taille = i - (*ind);
	w = malloc(taille + 1);
	if (w == NULL)
		return (NULL);
	i = 0;
	while (s[*ind] != c)
	{
		w[i] = s[(*ind)];
		(*ind)++;
		i++;
	}
	w[i] = '\0';
	return ((char *)w);
}

static char	**error_find_word(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		a;
	int		i;
	int		num_word;

	a = 0;
	i = 0;
	if (!s)
		return (NULL);
	num_word = number_word(s, c);
	p = malloc((num_word + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (i < num_word)
	{
		p[i] = find_word(s, c, &a);
		if (!p[i])
			return (error_find_word(p));
		i++;
	}
	p[i] = NULL;
	return (p);
}
