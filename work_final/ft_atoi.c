/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:36:45 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 12:41:38 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*str)
{
	long	result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	if (!str)
		return (result);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] <= 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1 ;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		result = result * 10 + str[i++] - '0';
	return (result * sign);
}
