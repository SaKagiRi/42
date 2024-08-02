/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njongcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:37:12 by njongcha          #+#    #+#             */
/*   Updated: 2024/07/18 01:20:22 by njongcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab [j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	sample[] = {5, 2, 9, 2, 5, 8};
	int	size = 6;
	int	i;

	ft_sort_int_tab(sample, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", sample[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
