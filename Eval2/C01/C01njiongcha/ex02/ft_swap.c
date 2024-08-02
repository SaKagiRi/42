/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njongcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:08:42 by njongcha          #+#    #+#             */
/*   Updated: 2024/07/17 21:50:43 by njongcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	y;
	int	z;

	y = 42;
	z = 24;
	printf("Before\n");
	printf("%d %d\n", y, z);
	ft_swap(&y, &z);
	printf("After\n");
	printf("%d %d", y, z);
	return (0);
}
*/
