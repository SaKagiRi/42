/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsirilax <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:12:25 by nsirilax          #+#    #+#             */
/*   Updated: 2024/07/13 19:39:45 by nsirilax         ###   ########.fr       */
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
