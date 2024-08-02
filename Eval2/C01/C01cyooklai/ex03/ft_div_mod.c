/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:44:59 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/17 12:47:24 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	div;
	int	mod;
	int	n;
	int	n1;

	n = 21;
	n1 = 21;
	ft_div_mod(n, n1, &div, &mod);
	printf("%d\n%d\n", div, mod);
	return (0);
}
*/
