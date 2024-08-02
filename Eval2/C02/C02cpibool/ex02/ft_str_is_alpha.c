/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:38:47 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 15:41:40 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
	printf("%d\n", ft_str_is_alpha("jshgjASDetErslkrghler"));
	printf("%d\n", ft_str_is_alpha("jshgjASDetEr235slkrer"));
	printf("%d\n", ft_str_is_alpha("jshgjAS-D'etErs:lkrgr"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}
*/
