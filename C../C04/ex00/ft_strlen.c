/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:05:50 by knakto            #+#    #+#             */
/*   Updated: 2024/07/23 23:08:56 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
/*
#include <stdio.h>
int	main(int c, char **v)
{
	printf("%d",ft_strlen(v[1]));
}
*/
