/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njongcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:42:20 by njongcha          #+#    #+#             */
/*   Updated: 2024/07/17 21:11:01 by njongcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int*tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main(void)
{
	int sample[] = {1,2,3,4,5};
	int size = 5;
	ft_rev_int_tab(sample, size);
	printf("results: \n");

	int i = 0;
	while (i < size)
	{

		printf("%d", sample[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/	
