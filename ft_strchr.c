/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:02:07 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/06 19:41:49 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return ((char *)s + a);
		a++;
	}
	if (s[a] == c)
		return ((char *)s + a);
	return (0);
}
/*
int	main(void) 
{
	const char	str[] = "salut cv?????";
	const char	ch = 'c';
	char	*ret;

	ret = ft_strchr(str, ch);

   printf("\n\n%c \n%s\n\n", ch, ret);
   
   return(0);
}
*/