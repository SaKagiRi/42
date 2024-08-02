/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:53:20 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/17 21:42:07 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>ii
//#include <stdio.h>

void	swap(int *p,	int *p1);

void	ft_rev_int_tab(int *tab, int size)
{
	int	swaps;
	int	i;

	i = 0;
	swaps = size / 2;
	while (swaps --)
	{
		swap(&(*(tab + i++)), &tab[--size]);
	}
}
/*
int	main(void)
{
	int	v[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		v[i] = rand () & 101;
		i++;
	}
	printf("\nBEFORE\n");
	i = 0;
	while (i < 10)
	{
		printf("%d ", v[i]);
		i++;
	}
	ft_rev_int_tab(v, sizeof(v) / sizeof(v[0]));
	printf("\nAFTER\n");
	i = 0;
	while (i < 10)
	{
		printf("%d ", v[i]);
		i++;
	}
}
*/
void	swap(int *p,	int *p1)
{
	int	tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}

