/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:17:29 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/06 20:41:26 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1 != '\0' && s2 != '\0' && s1 == s2 && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main (void)
{
	char a[] = "issouf";
	char b[] = "issoufjhk";

	printf("\n%d", ft_strncmp(a, b, 7));
	printf("\n%d\n", strncmp(a, b, 7));
}
*/