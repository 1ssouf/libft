/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:24:39 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/12 12:39:05 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*
int main () {
   const char str[] = "slt cv a";
   const char ch = 's';
   char *ret;
   char *ret1;

   ret = memchr(str, ch, 1);
   ret1 = memchr(str, ch, 1);

   printf("\n|%s| ----- |%s|\n", ret1, ret);

   return(0);
}
*/