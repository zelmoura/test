/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:27:38 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 14:30:09 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	if (!length)
		return (0);
	while (first[i] == second[i] && first[i] && second[i] && i < length)
		i++;
	if (i == length)
		return (0);
	return ((unsigned char)first[i] -(unsigned char)second[i]);
}
