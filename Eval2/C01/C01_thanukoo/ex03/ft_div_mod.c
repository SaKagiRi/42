/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanukoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:14:15 by thanukoo          #+#    #+#             */
/*   Updated: 2024/07/11 22:17:59 by thanukoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	div;
	int	mod;
	ft_div_mod(5, 2, &div, &mod);
	printf("5 / 2 -> div: %i, mod: %i\n", div, mod);
}
*/
