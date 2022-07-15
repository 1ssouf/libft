/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:27:23 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/15 16:38:49 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = dstsize;
	if (dstsize == 0)
		return (len_src);
	if (dstsize < len_dst)
		len_src += dstsize;
	i = 0;
	while (src[i] != '\0' && (len_dst + i) < dstsize - 1)
	{
		
	}
}
