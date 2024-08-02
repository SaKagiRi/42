/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:57:34 by knakto            #+#    #+#             */
/*   Updated: 2024/07/27 22:46:06 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;
	int	i;

	i = 1;
	temp = nb;
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	else if (nb == 0)
		return (0);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		temp = temp * nb;
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>
int	main(int c, char **v)
{
	printf("%d", ft_iterative_power(0, 0));
}
*/
