/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:17:41 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/09 11:47:09 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = -1;
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	while ((dest_len + ++i) < (size - 1) && src[i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
    char s1a[10] = "Test1";
	char s2a[20] = "OK";
	char s1b[10] = "Test1";
	char s2b[20] = "OK";
	char s3a[10] = "Idem";
	char s4a[20] = "Taille";
	char s3b[10] = "Idem";
	char s4b[20] = "Taille";
	printf("%zu:%zu\n", ft_strlcat(s1a, s2a, 6), strlcat(s1b, s2b, 6));
	printf("%zu:%zu\n", ft_strlcat(s3a, s4a, 10), strlcat(s3b, s4b, 10));
	printf("%s:%s\n", s1a, s1b);
	printf("%s:%s\n", s2a, s2b);
	printf("%s:%s\n", s3a, s3b);
	printf("%s:%s", s4a, s4b);
}
*/