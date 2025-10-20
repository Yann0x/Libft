/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:36:56 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/20 12:55:08 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	checker(const char *big, const char *little, int i, size_t len)
{
	int	j;

	j = 0;
	while (little[j])
	{
		if (big[i] != little[j])
			return (0);
		i++;
		j++;
	}
	if ((size_t)i > len)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (checker(big, little, i, len) == 1)
				return ((char *)(big += i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	printf("Test 1: %s\n", ft_strnstr("Hello, World!", "World", 13));
	printf("Test 1: %s\n", strnstr("Hello, World!", "World", 13));
	printf("Test 2: %s\n", ft_strnstr("Hello, World!", "world", 13));
	printf("Test 2: %s\n", strnstr("Hello, World!", "world", 13));
	printf("Test 3: %s\n", ft_strnstr("Hello, World!", "lo", 13));
	printf("Test 3: %s\n", strnstr("Hello, World!", "lo", 13));
	printf("Test 4: %s\n", ft_strnstr("Hello, World!", "Hello", 13));
	printf("Test 4: %s\n", strnstr("Hello, World!", "Hello", 13));
	printf("Test 5: %s\n", ft_strnstr("Hello, World!", "", 13));
	printf("Test 5: %s\n", strnstr("Hello, World!", "", 13));
	printf("Test 6: %s\n", ft_strnstr("Short haystack", "hay", 10));
	printf("Test 6: %s\n", strnstr("Short haystack", "hay", 10));
	printf("Test 7: %s\n", ft_strnstr("Hello, World!", "Not in string", 13));
	printf("Test 7: %s\n", strnstr("Hello, World!", "Not in string", 13));
	return (0);
}
*/