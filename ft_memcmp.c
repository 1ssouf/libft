/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:11:29 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/07 18:33:36 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main (void)
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "qwertya", 6);
   memcpy(str2, "qwertyw", 6);

   ret = ft_memcmp(str1, str2, 7);

   if(ret > 0) {
      printf("str2 plus grand que str1");
   } else if(ret < 0) {
      printf("str1 plus grand que str2");
   } else {
      printf("str1 egale str2");
   }
   
   return(0);
}
*/