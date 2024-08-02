/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludomsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 03:25:41 by ludomsak          #+#    #+#             */
/*   Updated: 2024/07/21 03:55:30 by ludomsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}

/*
#include <stdio.h>

int	main()
{
	char	str[] = "HappySunday";
	
	int	length = ft_strlen(str);
	printf("%d", length);

	return 0;
}
*/
