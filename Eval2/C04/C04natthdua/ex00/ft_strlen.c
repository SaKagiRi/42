/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:30:39 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/28 12:53:07 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Turn-in directory : ex00/
Files to turn in : ft_strlen.c
Allowed functions : None
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[] = "hehe";
	printf("%d\n", ft_strlen(a));
	return (0);
}*/
