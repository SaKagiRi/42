/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludomsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:22:49 by ludomsak          #+#    #+#             */
/*   Updated: 2024/07/17 16:48:08 by ludomsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*n;

	n = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n);
}
/*
int	main(void)
{
	char src[] = "42 Bangkok";
	char dest[] = "Students";
	printf("%s", ft_strcpy(dest, src));
	
	return (0);
}
*/
