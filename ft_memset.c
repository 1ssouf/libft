/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:48:48 by ialousse          #+#    #+#             */
/*   Updated: 2022/07/06 17:19:07 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*
int	main ()
{
	char	str[505555] = "salut ca va?";

	printf ("\n\navant memset(): %s\n", str);
	ft_memset (str + 3, '0', 11 * sizeof(char));
	printf ("\n\nApres memset(): %s\n", str);
	return (0);
}

// b ==> Adresse de départ de la mémoire à remplir
// c ==> Valeur à renseigner
// len ==> Nombre d'octets à remplir à partir de ptr à remplir
//void *memset(void *ptr, int x, size_t n);
*/