/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:24:32 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 14:26:08 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_joined;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str_joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str_joined == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str_joined[i] = s1[i];
		i++;
	}
	while (i < (ft_strlen(s1) + ft_strlen(s2)) && j < ft_strlen(s2))
	{
		str_joined[i++] = s2[j++];
	}
	str_joined[i] = '\0';
	return ((char *)str_joined);
}
