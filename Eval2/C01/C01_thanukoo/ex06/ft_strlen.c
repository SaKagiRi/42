/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanukoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:27:59 by thanukoo          #+#    #+#             */
/*   Updated: 2024/07/11 22:43:49 by thanukoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	int len = ft_strlen("hello");
	printf("input: hello, length: %i\n", len);
}
*/
