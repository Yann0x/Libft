/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:49:15 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/07 21:26:46 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	char str3[] = "Hello, world!";
	char str4[] = "Hello, World! Extra text";
	printf("%d (ft_memcmp) vs %d (memcmp)\n ", ft_memcmp(str1, str2, 13),
			memcmp(str1, str2, 13));
	printf("%d (ft_memcmp) vs %d (memcmp)\n ", ft_memcmp(str1, str3, 13),
			memcmp(str1, str3, 13));
	printf("%d (ft_memcmp) vs %d (memcmp)\n ", ft_memcmp(str1, str4, 20),
			memcmp(str1, str4, 20));
	printf("%d (ft_memcmp) vs %d (memcmp)\n ", ft_memcmp(str1, str2, 5),
			memcmp(str1, str2, 5));
	printf("%d (ft_memcmp) vs %d (memcmp)\n ", ft_memcmp(str1, str3, 5),
			memcmp(str1, str3, 5));
	return (0);
}
*/