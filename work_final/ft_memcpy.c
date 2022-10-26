/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:31:21 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 18:36:00 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy( void *destination, const void *source, size_t size )
{
	size_t	i;

	i = 0;
	if (!source)
	{
		*(unsigned char *)destination = '\0';
		return (destination);
	}
	while (i < size)
	{
		(*(unsigned char *)(destination + i)) = \
		(*(unsigned char *)(source + i));
		i++;
	}
	return (destination);
}
