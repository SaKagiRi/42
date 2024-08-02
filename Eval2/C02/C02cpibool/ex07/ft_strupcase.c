/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:30:03 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 17:44:26 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 97 && str [i] <= 122)
		{
			str [i] = str [i] - 32;
		}
		else
		{
			str [i] = str [i];
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "Hello World";

	printf("%s\n", ft_strupcase(str));
}
*/
