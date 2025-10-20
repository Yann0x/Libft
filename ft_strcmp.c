/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:58:57 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/09 11:45:30 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    printf("%d\n", strcmp("cadab","cadab"));
    printf("%d\n", ft_strcmp("cadab","cadab"));
    printf("%d\n", strcmp("cadab","cada"));
    printf("%d", ft_strcmp("cadab","cada"));
}
*/