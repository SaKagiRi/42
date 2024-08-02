/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanukoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:44:28 by thanukoo          #+#    #+#             */
/*   Updated: 2024/07/12 20:34:55 by thanukoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int	*a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - i - 1)
	{
		ft_swap(tab + i, tab + size - i -1);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	a[] = {1, 2, 4, 5};
	int len = 4;
	for (int i=0;i<len;i++)
		printf("%i ", a[i]);
	printf("\n");
	ft_rev_int_tab(a, len);
	for (int i=0;i<len;i++)
		printf("%i ", a[i]);
	printf("\n");
}
*/
