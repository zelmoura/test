/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelmoura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:09 by zelmoura          #+#    #+#             */
/*   Updated: 2022/10/23 18:46:01 by zelmoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str && str[i])
	{
		if (str[i] == c)
			k = i;
		i++;
	}
	if (k)
		return ((char *)&str[k]);
	if (!(char )c)
		return ((char *)&str[i]);
	return (0);
}
