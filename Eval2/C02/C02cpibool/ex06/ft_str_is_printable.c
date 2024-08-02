/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:15:30 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 16:28:38 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] < ' ' || str [i] > '~')
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
	printf("%d\n", ft_str_is_printable("!#$%& *+-,/6"));
	printf("%d\n", ft_str_is_printable("pweejeo;jlef"));
	printf("%d\n", ft_str_is_printable("KHGDHJGDKDL"));
	printf("%d\n", ft_str_is_printable(""));
}
*/
