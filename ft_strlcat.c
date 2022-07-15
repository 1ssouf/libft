/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:27:23 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/15 21:24:54 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	j = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	if (dstsize == 0)
		return (len_src);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	else
	{
		while (src[j] && (len_dst + j) < dstsize)
			dst[i++] = src[j++];
		if ((len_dst + j) == dstsize && len_dst < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (len_dst + len_src);
	}
}
