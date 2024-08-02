/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:40:23 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/29 23:34:26 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Turn-in directory : ex00/
Files to turn in : ft_iterative_factorial.c
Allowed functions : None*/

int	ft_iterative_factorial(int nb)
{
	int	t;

	t = 1;
	while (nb > 1)
	{
		t = t * nb;
		nb--;
	}
	if (nb >= 0)
		return (t);
	else
		return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_iterative_factorial(7));
}*/
