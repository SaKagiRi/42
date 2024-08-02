/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:20:23 by pbanlang          #+#    #+#             */
/*   Updated: 2024/08/01 20:58:23 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	count_str(int size, char **strs)
{
	int		i;
	int		m;
	int		counter;

	i = -1;
	m = 0;
	counter = 0;
	while (++i < size)
	{
		while (strs[i][m])
		{
			counter += 1;
			m++;
		}
		m = 0;
	}
	return (counter);
}

int	count_sep(char *sep)
{
	int	counter;

	counter = 0;
	while (*sep)
	{
		sep++;
		counter++;
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		index;
	int		sp;
	char	*dest;

	i = 0;
	j = 0;
	index = 0;
	dest = (char *) malloc((count_str(size, strs) + \
				(size) * count_sep(sep) + 1) * sizeof(char));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[index++] = strs[i][j++];
		sp = 0;
		while (sep[sp] && i != (size -1))
			dest[index++] = sep[sp++];
		i++;
	}
	dest[index] = '\0';
	return (dest);
}
// int main(int ac,char *av[])
// {
// 	printf("%s",ft_strjoin(ac , av, "1"));

// }