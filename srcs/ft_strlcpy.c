/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:39:23 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/09 11:49:16 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i != size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	*src1a = "abcde";
	char	*dest1a = "1234567";
	char	*src1b = "abcde";
	char	*dest1b = "1234567";

	printf("%s\n%s\n",
			ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1b, src1b,
					0) ? "Pass" : "Fail",
			strcmp(dest1a, dest1b) == 0 && strcmp(src1a,
					src1b) == 0 ? "Pass" : "Fail");
}
*/