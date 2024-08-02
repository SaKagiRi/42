/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanukoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:28:40 by thanukoo          #+#    #+#             */
/*   Updated: 2024/07/12 20:36:21 by thanukoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				ft_swap(tab + i, tab + j);
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	a[] = {5, 4, 3, 2, 1};
	int len = 5;
	for (int i=0;i<len;i++)
		printf("%i ", a[i]);
	printf("\n");
	ft_sort_int_tab(a, len);
	for (int i=0;i<len;i++)
		printf("%i ", a[i]);
	printf("\n");
}
*/
