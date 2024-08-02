/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 23:53:30 by knakto            #+#    #+#             */
/*   Updated: 2024/08/02 03:04:28 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	cat(char *dest, char *src)
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
}

int	lens(char **str, char *sep, int size)
{
	int	x;
	int	y;
	int	h;

	h = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (str[y][x++])
			h++;
		x = 0;
		if (y < size - 1)
			while (sep[x++])
				h++;
		y++;
	}
	return (h);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*desk;

	i = 0;
	desk = malloc(lens(strs, sep, size) * sizeof(char) + 1);
	desk[i] = '\0';
	while (i < size)
	{
		if (strs[i][0])
			cat(desk, strs[i]);
		if (i < size - 1)
			cat(desk, sep);
		i++;
	}
	i = 0;
	while (desk[i])
		i++;
	desk[i] = '\0';
	return (desk);
}
/*
#include <stdio.h>

int	main(int c, char **v)
{
	char	**str;

	str[0] = "hello";
	str[1] = "world";
	str[2] = "muhahaha";
	str[3] = "1235";

	while (*str++)
		while (**str)
			write(s)
			
	printf("%s", ft_strjoin(3, v, "kuy"));
}
*/
