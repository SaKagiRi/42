/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:39:54 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/16 10:10:27 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
int	main(void)
{
	int	x;
	int	y;

	printf("Enter value of x ");
	scanf("%d", &x);
	printf("Enter value of y ");
	scanf("%d", &y);
	ft_ultimate_div_mod(&x, &y);
	printf("%i\n", x);
	printf("%i\n", y);
	printf("%d\n%d\n", x, y);
	return (0);
}
*/
