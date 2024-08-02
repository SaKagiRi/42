/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanukoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:19:08 by thanukoo          #+#    #+#             */
/*   Updated: 2024/07/11 22:24:07 by thanukoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 5;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("5 / 2 -> div: %i, mod %i\n", a, b);
}
*/
