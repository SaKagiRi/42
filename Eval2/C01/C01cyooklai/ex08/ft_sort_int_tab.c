/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 09:06:43 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/17 22:49:17 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>

void	swap(int *n, int *n1);

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		i++;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j] + 1);
			j++;
		}
	}
}
/*
int	main(void)
{
	int	v[100];
	int	i;

	i = 0;
	printf("\n-----\nBEFORE SORT\n-----\n");
	while (i < 100)
	{
		v[i] = rand () & 1001 - 50;
		printf("%d ", v[i]);
		i++;
	}
	ft_sort_int_tab(v, 100);
	i = 0;
	printf("\n-----\nAFTER SORT\n-----\n");
	while (i < 100)
	{
		printf("%d ", v[i]);
		i++;
	}
}
*/

void	swap(int *n, int *n1)
{
	int	x;

	x = *n;
	*n = *n1;
	*n1 = x;
}
