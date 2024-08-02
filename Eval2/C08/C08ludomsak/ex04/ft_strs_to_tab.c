/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludomsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 22:21:59 by ludomsak          #+#    #+#             */
/*   Updated: 2024/07/31 23:15:55 by ludomsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*n;
	int		i;

	i = 0;
	n = (char *) malloc (ft_strlen(src) + 1);
	if (src[i] == 0)
	{
		n[i] = src[i];
		return (n);
	}
	while (src[i] != 0)
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			x;

	x = 0;
	t = malloc(sizeof(t_stock_str) * (ac + 1));
	if (t == NULL)
		return (NULL);
	while (x < ac)
	{
		t[x].size = ft_strlen(av[x]);
		t[x].str = av[x];
		t[x].copy = ft_strdup(av[x]);
		x++;
	}
	t[x].str = 0;
	t[x].size = 0;
	t[x].copy = 0;
	return (t);
}

/*
int	main(void)
{
	char	*i;

	i = "hello world";
	printf("1: %s %p\n", i, &i);
	char	*d = ft_strdup(i);
	printf("2: %s %p\n", d, &i);
	free (d);
	return (0);
}
*/
