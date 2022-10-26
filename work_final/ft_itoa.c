/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:43:16 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 12:55:12 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_len(int n)
{
	int	length;
	int	a;

	a = n;
	length = 0;
	if (n <= 0)
	{
		length = length + 1;
		a = n * -1;
	}
	while (a > 0)
	{
		length++;
		a = a / 10;
	}
	return (length);
}

void	rev_str(char	*str)
{
	int		i;
	int		j;
	char	tmp;
	int		len;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_len(n);
	str = malloc(ft_len(n) + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[i] = '0';
	if (n < 0)
	{
		str[ft_len(n) - 1] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[len] = '\0';
	rev_str(str);
	return (str);
}
