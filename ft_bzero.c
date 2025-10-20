/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:08:51 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/12 16:45:29 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = 0;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
    char buffer[50];
    char buffer2[50];
    memset(buffer, 'A', 10);
    printf("Contenu du buffer: %s\n", buffer);
    memset(buffer2, 'A', 10);
    printf("Contenu du buffer2: %s\n", buffer2);
    ft_bzero(buffer, 5);
    printf("Contenu du buffer apres bzero: %s\n", buffer);
    bzero(buffer2, 5);
    printf("Contenu du buffer2 apres ft_bzero: %s\n", buffer2);
    return (0);
}
*/