/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:59:34 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 13:07:44 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size )
{
	if (dest < src)
		ft_memcpy(dest, src, size);
	else
	{
		while (size--)
			(*(unsigned char *)(dest + size)) = \
			(*(unsigned char *)(src + size));
	}
	return (dest);
}
