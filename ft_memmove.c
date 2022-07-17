/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:02:46 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/17 15:41:04 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
/*
int	main () {
   char dest[10] = "123456789";
   const char src[10]  = "ABCDEFGHI";

   printf("\ndest = %s, src = %s\n", dest, src);
   memmove(dest, src, 10);
   printf("dest = %s, src = %s\n", dest, src);
   return(0);
}
*/