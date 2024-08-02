/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 01:09:30 by knakto            #+#    #+#             */
/*   Updated: 2024/07/16 03:28:32 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	stop_digit;
	int	tmp_swap;

	stop_digit = size / 2;
	i = 0;
	while (i < stop_digit)
	{
		tmp_swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp_swap;
		i++;
	}
}
