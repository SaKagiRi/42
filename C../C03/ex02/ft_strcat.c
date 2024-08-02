/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:10:53 by knakto            #+#    #+#             */
/*   Updated: 2024/07/22 22:45:42 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	while (dest[c])
		++c;
	while (src[i])
	{
		dest[c] = src[i];
		++c;
		++i;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int c, char **v)
{
	printf("%s", ft_strcat(v[1], v[2]));
}
*/
