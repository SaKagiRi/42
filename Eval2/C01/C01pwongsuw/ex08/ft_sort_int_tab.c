/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwongsuw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:01:36 by pwongsuw          #+#    #+#             */
/*   Updated: 2024/07/15 16:06:00 by pwongsuw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int siz)
{
	int	temp;
	int	j;
	int	i;
	int	min_index;

	i = 0;
	while (i <= siz)
	{
		min_index = i;
		j = i + 1;
		while (j < siz)
		{
			if (tab[j] <= tab[min_index])
			{
				min_index = j;
			}
			j++;
		}
		temp = tab[min_index];
		tab[min_index] = tab[i];
		tab[i] = temp;
		i++;
	}
}
