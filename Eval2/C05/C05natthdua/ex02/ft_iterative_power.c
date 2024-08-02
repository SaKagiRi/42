/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:43:28 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/29 16:25:00 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Turn-in directory : ex02/
Files to turn in : ft_iterative_power.c
Allowed functions : None*/

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while ((power - 1) > 0)
	{
		nb *= a;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(2, 3));
}*/
