/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:35 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/07 20:26:01 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d:%d\n", ft_isascii('='),isascii('='));
    printf("%d:%d\n", ft_isascii('5'),isascii('5'));
    printf("%d:%d", ft_isascii('g'),isascii('g'));
}
*/