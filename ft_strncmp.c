/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:15:22 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/13 18:38:27 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] == '\0')
			return (-s2[i]);
		else if (s2[i] == '\0')
			return (-s1[i]);
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else if (i + 1 == n)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] == '\0')
			return (-1);
		else if (s2[i] == '\0')
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		i++;
	}
	if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	size;
	int		i1;
	int		i2;

	s1 = "\x12\xff\x65\x12\xbd\xde\xad";
    s2 = "\x12\x02";
    size = 6;
    i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ?
			-1 : 0));
    i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ?
			-1 : 0));
	printf("%d : %d",i1, i2);
}
*/