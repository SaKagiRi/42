/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:19:03 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/18 00:03:25 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

voaid	ft_ft(int *nbr)
{
	int	a;

	a = 42;
	*nbr = a;
}
/*
int	main(void)
{
	int	num;
	int	*nbr;

	num = 5;
	nbr = &num;
	printf("%d\n", num);
	ft_ft(nbr);
	printf("%d\n", num);
	return (0);
}
*/
