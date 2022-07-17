/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:45:33 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/17 15:18:38 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			write (fd, s, 1);
			s++;
		}
	}
	write (1, "\n", 1);
}
/*
int	main(void)
{
	char a[44] = "agsssssdwaef";
	ft_putendl_fd(a, 1);
}
*/
