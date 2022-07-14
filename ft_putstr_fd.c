/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:52:42 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/14 19:06:45 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write (fd, s, 1);
			s++;
		}
	}
}
/*
int	main(void)
{
	char a[44] = "agsssssdwaef";
	ft_putstr_fd(a, 1);
}
*/