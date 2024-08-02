/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 01:44:01 by knakto            #+#    #+#             */
/*   Updated: 2024/08/01 02:58:48 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	sub;
	int	*dest;

	i = 0;
	sub = max - min;
	if (sub <= 0)
		return (NULL);
	dest = (int *) malloc(sub * sizeof(int));
	while (min < max)
		dest[i++] = min++;
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*dest;

	dest = ft_range(1, 3);
	while (*dest)
	{
		printf("%d", *dest);
		dest++;	
	}
}
*/
