/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:17:11 by knakto            #+#    #+#             */
/*   Updated: 2024/07/27 21:30:09 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	max;

	if (nb != 1 && nb > 2)
	{
		i = 2;
		max = nb / 2;
		while (i <= max)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else if (nb == 2)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_is_prime(4));
}
*/
