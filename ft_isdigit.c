/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:17 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/07 20:26:48 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (2048);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d:%d\n", ft_isdigit('='),isdigit('='));
    printf("%d:%d\n", ft_isdigit('5'),isdigit('5'));
    printf("%d:%d", ft_isdigit('g'),isdigit('g'));
}
*/