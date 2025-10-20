/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:31:47 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/11/13 19:59:05 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nb)
{
	int		count;
	long	i;

	count = 1;
	i = nb;
	if (nb < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 9)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*nb;
	long	nbr;
	int		i;
	int		sign;

	nbr = n;
	i = ft_nbrlen(n);
	nb = malloc(sizeof(char) * (i + 1));
	if (!nb)
		return (NULL);
	nb[i] = '\0';
	sign = 0;
	if (nbr < 0)
	{
		nb[0] = '-';
		nbr *= -1;
		sign++;
	}
	while (--i >= sign)
	{
		nb[i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (nb);
}
/*
int	main(int ac, char **av)
{
	//printf("%d", strcmp(ft_itoa(atoi(av[1])),av[2]));
	printf("%s", ft_itoa(atoi(av[1])));
	return (0);
}
*/