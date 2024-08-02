/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:55:24 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/23 01:57:05 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			if (str[i - 1] <= 47
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| (str[i - 1] >= 123 && str[i - 1] <= 126))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

int	main(int c,char **v)
{
	//char	str [] = "salut, comment tu vas ? 42mots que-dx; cinquante+et+un";

	printf("%s", ft_strcapitalize(v[c - 1]));
}

