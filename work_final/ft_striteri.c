/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:20:22 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 19:22:26 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	count;
	int	i;

	if (!s || !f)
		return ;
	count = ft_strlen(s);
	i = 0;
	while (i < count)
	{
		f(i, &s[i]);
		i++;
	}
}
