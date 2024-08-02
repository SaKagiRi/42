/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <knakto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:57:57 by ytsatsar          #+#    #+#             */
/*   Updated: 2024/08/01 21:55:15 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int compare_int(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	int array[] = {1, 4, 3, 12};
	int sorted = ft_is_sort(array, 4, &compare_int);
	printf("%d", sorted);
}

