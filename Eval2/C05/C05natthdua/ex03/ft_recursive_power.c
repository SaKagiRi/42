/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:44:23 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/29 16:21:57 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Turn-in directory : ex03/
Files to turn in : ft_recursive_power.c
Allowed functions : None*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_power(2, 5));
}*/
