/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:42:28 by syooklai          #+#    #+#             */
/*   Updated: 2024/07/18 05:08:08 by syooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	ltemp;
	int	rtemp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ltemp = *(tab + (size - 1 - i));
		rtemp = *(tab + i);
		*(tab + (size - 1 - i)) = rtemp;
		*(tab + i) = ltemp;
		i++;
	}
}
