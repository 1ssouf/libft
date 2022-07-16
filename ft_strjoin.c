/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:13:49 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/16 19:41:55 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	len;
	char	*str;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (s2 && !s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = s1_len + s2_len + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_memmove(str, s1, s1_len);
	ft_memmove(str + s1_len, s2, s2_len);
	str[len + 1] = '\0';
	return (str);
}
/*
int main (void)
{
	char a[] = "abc";
	char b[] = "def";
	printf("\n\n%s\n\n",ft_strjoin(a, b));
	return (0);
}
*/