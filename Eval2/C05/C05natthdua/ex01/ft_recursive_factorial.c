/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:42:12 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/29 15:46:57 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Turn-in directory : ex01/
Files to turn in : ft_recursive_factorial.c
Allowed functions : None*/

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial("2"));
}*/
