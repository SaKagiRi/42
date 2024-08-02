/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:09:19 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 16:14:29 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] < 'A' || str [i] > 'Z')
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
	printf("%d\n", ft_str_is_uppercase("FGHEFJLIYKHGD"));
	printf("%d\n", ft_str_is_uppercase("khHFiioIFJDLO"));
	printf("%d\n", ft_str_is_uppercase("JKLHKE*HJYD$K"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/
