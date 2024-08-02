/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:48:51 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/17 11:17:01 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src [i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char    arr [] = "Coding is easy";
      
	ft_strcpy(arr, "You are a liar");
	printf("%s", arr);
}
*/
