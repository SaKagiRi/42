/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njongcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:41:29 by njongcha          #+#    #+#             */
/*   Updated: 2024/07/24 17:26:26 by njongcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n -1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *str1;
	char *str2;
	unsigned int	n = 4;

	str1 = "42";
	str2 = "42 Bangkok";
	printf("strncmp with n count: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}
*/
