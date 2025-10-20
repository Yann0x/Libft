/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:08:23 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/14 19:51:54 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *s, int c, size_t n)
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	long			total_size;
	unsigned char	*pdest;

	total_size = nmemb * size;
	if (total_size > 2147483647)
		return (NULL);
	pdest = malloc(total_size);
	if (pdest == NULL)
		return (NULL);
	ft_memset(pdest, 0, total_size);
	return (pdest);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	size;
	void	*ptr;

	size_t nmemb = 200; // Maximum value for size_t
	size = 2;
	ptr = ft_calloc(nmemb, size);
	if (ptr == NULL)
	{
		printf("Memory allocation failed (possible overflow).\n");
	}
	else
	{
		printf("Memory allocated successfully.\n");
		free(ptr);
	}
	return (0);
}
*/