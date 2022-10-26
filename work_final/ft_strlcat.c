/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:58:29 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 15:01:17 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	int		j;

	j = 0;
	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_dst + len_src);
	while (j < size - len_dst - 1 && src[j])
	{
		dest[len_dst + j] = src[j];
		j++;
	}
	dest[len_dst + j] = '\0';
	return (len_dst + len_src);
}
