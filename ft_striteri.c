/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:26:47 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/11 13:59:33 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void ft_addascii(unsigned int i, char *pc)
{
    *pc += i;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
    char string[] = "abcdef";
    
    ft_striteri(string, ft_addascii);

    printf("%s",string);
}
*/