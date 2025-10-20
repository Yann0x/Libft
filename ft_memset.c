/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:46:48 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/11 14:34:39 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pdest;
	size_t			i;

	i = 0;
	pdest = s;
	while (i < n)
	{
		pdest[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	ftbuffer[50];
	char	ogbuffer[50];

	ft_memset(ftbuffer, 'A', 10);
	memset(ogbuffer, 'B', 10);
	printf("Le buffer ft contient: ");
	printf("%s\n", ftbuffer);
	printf("Le buffer og contient: ");
	printf("%s\n", ogbuffer);
	return (0);
}
*/