/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:44:24 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 16:00:56 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' )
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_numeric("16275487823985"));
	printf("%d\n", ft_str_is_numeric("26849hjkjdlsf3"));
	printf("%d\n", ft_str_is_numeric("2846823%3984-+"));
	printf("%d\n", ft_str_is_numeric(""));
}
*/
