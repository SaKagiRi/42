/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:03:04 by knakto            #+#    #+#             */
/*   Updated: 2024/07/25 16:33:18 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	pos;

	i = 0;
	num = 0;
	pos = 1;
	while (str[i] <= ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos = -pos;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			break ;
		}
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * pos);
}
/*
#include <stdio.h>
int	main(int c, char **v)
{
	printf("%d", ft_atoi(v[c - 1]));
}
*/
