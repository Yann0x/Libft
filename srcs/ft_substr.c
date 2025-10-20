/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:42:53 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/19 15:19:20 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*suite_substr(void)
{
	char	*s2;

	s2 = malloc(1);
	if (!s2)
		return (NULL);
	if (s2)
		s2[0] = '\0';
	return (s2);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	l;

	l = 0;
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		s2 = suite_substr();
		if (!s2)
			return (NULL);
		else
			return (s2);
	}
	if (start + len > (unsigned int)ft_strlen((char *)s))
		len = (unsigned int)ft_strlen((char *)s) - start;
	s2 = malloc(((int)len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (l < len)
	{
		s2[l] = s[start + l];
		l++;
	}
	s2[len] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char	*str;
	char	*s;
	char	*result;

	result = "";
    str = strdup("0123456789");
	s = ft_substr("", 1, 1);
	printf("'%s' & '%s'", s, result);
}
*/