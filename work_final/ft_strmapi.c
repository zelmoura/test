/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:22:47 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 19:25:54 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	int		i;
	char	*resultat;

	if (!s || !f)
		return (NULL);
	count = ft_strlen(s);
	i = 0;
	resultat = malloc(count + 1);
	if (!resultat)
		return (NULL);
	while (i < count)
	{
		resultat[i] = f(i, s[i]);
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}
