/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:42:06 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/07 19:12:28 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	srclen = ft_strlen(src);
	if (!dstsize)
		return (srclen);
	while (i < dstsize && src[i] != '\0')
	{
		src[i] == dst[i];
		i++;
	}
	if (dstsize < srclen)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return(srclen);
}