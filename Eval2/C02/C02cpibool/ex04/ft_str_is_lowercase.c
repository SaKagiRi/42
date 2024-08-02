/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:02:38 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 16:08:18 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] < 'a' || str [i] > 'z')
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
	printf("%d\n", ft_str_is_lowercase("wjkrghekrjhgkejrhg"));
	printf("%d\n", ft_str_is_lowercase("wjkrgheBNMBNMejrhg"));
	printf("%d\n", ft_str_is_lowercase("wjkrgh*ek28469jrhg"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/
