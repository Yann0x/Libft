/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:14:54 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/19 15:23:06 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search_clockwise(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	verif;

	verif = 1;
	i = 0;
	j = 0;
	while (verif > 0)
	{
		verif = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				verif++;
				i++;
			}
			j++;
		}
		j = 0;
	}
	return (i);
}

static int	search_counterclockwise(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	verif;

	verif = 1;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (verif > 0)
	{
		verif = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				verif++;
				i--;
			}
			j++;
		}
		j = 0;
	}
	return (i);
}

static char	*failsafe_strtrim(void)
{
	char	*res;

	res = malloc(1);
	if (!res)
		return (NULL);
	else
		res[0] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		n;
	int		i;
	int		j;
	char	*res;

	i = search_clockwise(s1, set);
	n = search_counterclockwise(s1, set);
	if (n == -1)
		return (failsafe_strtrim());
	j = 0;
	res = malloc(sizeof(char) * (n - i + 1) + 1);
	if (!res)
		return (NULL);
	while (i <= n)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*ret;

    ret = ft_strtrim("", "");
	printf("'%s' & '%s'", ret, "");
}
*/