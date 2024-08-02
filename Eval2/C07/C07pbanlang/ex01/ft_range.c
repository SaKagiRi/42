/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:02:07 by pbanlang          #+#    #+#             */
/*   Updated: 2024/08/01 16:20:23 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	result = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main(int ac, int *av[])
// {
//     int a = av[1];
//     int b = av[2];
//     ft_range(a,b);
// }
