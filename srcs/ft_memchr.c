/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:40:59 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/07 21:18:22 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void) {
    const char buffer[] = "Hello, World!";
    const char buffer2[] = "Hello, World!";
    char target = 'W';
    char *result = (char *)memchr(buffer, target, sizeof(buffer));
    char *result2 = (char *)ft_memchr(buffer2, target, sizeof(buffer2));
    if (result) {
        printf("Charactere '%c' trouve a l'index: %ld\n", target, result
		- buffer);}
    else {printf("Charactere '%c' non trouve.\n", target);}
    if (result2) {
        printf("Charactere '%c' trouve a l'index: %ld\n", target, result2
		- buffer2);}
    else {printf("Charactere '%c' non trouve.\n", target);}
    return (0);
}
*/