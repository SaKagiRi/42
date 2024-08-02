/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njongcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:48:51 by njongcha          #+#    #+#             */
/*   Updated: 2024/07/25 01:52:50 by njongcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] != '\0' && (dlen + i + 1) < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int	main(void)
{
	char	dest[100] = "42 ";
	char	src[100] = "Bangkok";
	unsigned int 	size;
	unsigned int	output;

	size = 6;
	output = ft_strlcat(dest, src, size);
	printf("%s\n", strncat(dest, src, size));
	printf("%u\n", ft_strlcat(dest, src, size));
	return (0);
}
*/
