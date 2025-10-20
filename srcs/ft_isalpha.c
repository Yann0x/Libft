/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:05 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/11 15:33:23 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1024);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d:%d\n", ft_isalpha('='),isalpha('='));
    printf("%d:%d\n", ft_isalpha('5'),isalpha('5'));
    printf("%d:%d", ft_isalpha('g'),isalpha('g'));
}
*/