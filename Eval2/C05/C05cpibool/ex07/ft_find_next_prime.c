/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:06:33 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/25 02:18:33 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x < nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	nb++;
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
int	main()
{
	printf("%d", ft_find_next_prime(632));
}
*/
