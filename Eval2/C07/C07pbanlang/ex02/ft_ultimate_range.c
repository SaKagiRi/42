/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:02:01 by pbanlang          #+#    #+#             */
/*   Updated: 2024/08/01 22:50:29 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc((max - min) * sizeof(int) + 1);
	i = 0;
	if (result == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	result[i] = '\0';
	*range = result;
	return (i);
}
