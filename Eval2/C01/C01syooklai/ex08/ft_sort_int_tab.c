/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 00:02:39 by syooklai          #+#    #+#             */
/*   Updated: 2024/07/18 03:01:46 by syooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;
	int	count2;

	count2 = 0;
	while (count2 < (size - 1))
	{
		count = 0;
		while (count < (size - 1))
		{
			if (tab[count] > tab[count + 1])
			{
				swap = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = swap;
			}
			else
				count++;
		}
		count2++;
	}
}
