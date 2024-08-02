/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivisavak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 21:51:08 by ivisavak          #+#    #+#             */
/*   Updated: 2024/07/28 21:47:28 by ivisavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	number;

	i = 0;
	negative = 0;
	number = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\t'))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	if (negative % 2 == 1)
		return (number * -1);
	return (number);
}

/*int	main(void)
{
	char s[] = "    --++--8555";

	printf("%d", ft_atoi(s));
}*/
