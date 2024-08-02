/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:46:03 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 17:53:29 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 65 && str [i] <= 90)
		{
			str [i] = str [i] + 32;
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
	char	str [12] = "HELLo wORld";

	printf("%s\n", ft_strlowcase(str));
}
*/
