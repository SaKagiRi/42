/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njongcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:41:29 by njongcha          #+#    #+#             */
/*   Updated: 2024/07/24 17:26:55 by njongcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "42";
	str2 = "42 Bangkok";
	str3 = "42";
	printf("str1 - str2: %d\n", ft_strcmp(str1, str2));
	printf("str2 - str3: %d\n", ft_strcmp(str2, str3));
	printf("str1 - str3: %d\n", ft_strcmp(str1, str3));
	return (0);
}
*/
