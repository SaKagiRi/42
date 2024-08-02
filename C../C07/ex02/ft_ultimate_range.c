/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 03:00:06 by knakto            #+#    #+#             */
/*   Updated: 2024/08/01 03:09:52 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sub;
	int	i;

	i = 0;
	sub = max - min;
	if (sub <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * sub);
	while (min < max)
		range[0][i++] = min++;
	return (sub);
}
