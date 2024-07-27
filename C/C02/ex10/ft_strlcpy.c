/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:06:08 by knakto            #+#    #+#             */
/*   Updated: 2024/07/22 02:33:55 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	if (size != 0)
		size--;
	while (src[len] != '\0')
		len++;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	dest[1000];
	unsigned int	size;

	size = 10;
	printf("\n%d", ft_strlcpy(dest, argv[argc - 1], size));
	printf("%s", dest);
}
*/
