/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:10 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/07 20:18:24 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
		return (0);
	return (8);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d:%d\n", ft_isalnum('='),isalnum('='));
    printf("%d:%d\n", ft_isalnum('5'),isalnum('5'));
    printf("%d:%d", ft_isalnum('g'),isalnum('g'));
}
*/