/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:22 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/11 20:03:57 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c <= 31) || c >= 127)
		return (0);
	return (16384);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d:%d\n", ft_isprint('='),isprint('='));
    printf("%d:%d\n", ft_isprint('5'),isprint('5'));
    printf("%d:%d", ft_isprint('\0'),isprint('\0'));
}
*/