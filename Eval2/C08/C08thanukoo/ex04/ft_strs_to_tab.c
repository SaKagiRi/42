/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanukoo <thanukoo@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:37:44 by thanukoo          #+#    #+#             */
/*   Updated: 2024/08/01 23:23:53 by thanukoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

static char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = malloc((i + 1) * sizeof(char));
	if (copy == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_strs;

	i = 0;
	stock_strs = malloc((ac + 1) * sizeof(t_stock_str));
	if (stock_strs == 0)
		return (0);
	while (i < ac)
	{
		stock_strs[i] = (t_stock_str){ft_strlen(av[i]), \
			av[i], ft_strdup(av[i])};
		i++;
	}
	stock_strs[i] = (t_stock_str){0};
	return (stock_strs);
}
