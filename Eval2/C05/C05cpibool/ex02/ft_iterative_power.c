/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:11 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/25 03:22:13 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		x = nb * x;
		power--;
	}
	return (x);
}
int	main()
{
	printf("%d", ft_iterative_power(20, 0));
}
