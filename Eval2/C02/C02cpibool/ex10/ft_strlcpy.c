/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:41:51 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/22 16:36:48 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src [i] != '\0')
	{
		i++;
		j++;
	}
	i++;
	i = 0;
	while (i < size && src [i] != '\0')
	{
		if (j < size)
			dest [i] = src [i];
		else if (i < size - 1)
			dest [i] = src [i];
		i++;
	}
	if (i < size)
	{
		dest [i] = '\0';
	}
	return (j);
}
/*
int	main(void)
{
	char	src [] = "wtffffff";
	char	dest [] = "Only coding, no eating no sleeping";
	unsigned int	j;

	printf("%d", ft_strlcpy(dest, src, j));
}
*/
