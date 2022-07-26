/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:57:51 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/26 18:30:26 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	num;
	int		neg;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - 48);
		i++;
		if (neg * num > INT_MAX)
			return (-1);
		if (neg * num < INT_MIN)
			return (0);
	}
	return (num * neg);
}
/*
int main ()
{
	char a[] = "   -5666666655555555555555555555665556ss6666666";
	printf ("\n\nres = %d\n\n", ft_atoi(a));
	printf ("\n\nres = %d\n\n", atoi(a));
}
*/