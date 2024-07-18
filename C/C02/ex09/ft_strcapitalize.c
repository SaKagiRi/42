/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:02:24 by knakto            #+#    #+#             */
/*   Updated: 2024/07/18 21:28:20 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		else if ((str[i - 1] >= 1 && str[i - 1] <= 47)
			|| (str[i] >= 58 && str[i] <= 64) || (str[i] >= 123))
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char a[] = "Hello";
	printf("%s",ft_strcapitalize(a));
}*/
