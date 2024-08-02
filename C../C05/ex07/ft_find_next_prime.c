/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <knakto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 22:49:58 by knakto            #+#    #+#             */
/*   Updated: 2024/07/27 22:58:01 by knakto           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (i == 0)
	{
		nb++;
		if (ft_is_prime(nb) == 1)
			break ;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_find_next_prime(11));
}
*/
