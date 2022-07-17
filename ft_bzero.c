/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:08:53 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/17 17:51:13 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char	buff[11]= "0123456789";

	bzero(buff, 10);
	printf("\n-%s-\n", buff);
	ft_bzero(buff, 10);
	printf("\n-%s-\n", buff);
	return (0);
}
*/