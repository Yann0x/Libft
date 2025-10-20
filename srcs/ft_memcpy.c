/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:54:54 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/14 19:48:43 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = dest;
	psrc = src;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buffer[50];
	char	buffer2[50];
	char	buffer3[50];

	//memset(buffer, 'A', 10);
	//ft_memcpy(buffer2, buffer, 10);
	//memcpy(buffer3, buffer, 10);
	//printf("version ft: %s\n", buffer2);
	//printf("version og: %s\n", buffer3);
	ft_memcpy(((void *)0), ((void *)0), 3);
	return (0);
}
*/