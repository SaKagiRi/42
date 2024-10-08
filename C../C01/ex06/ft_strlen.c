/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:54:08 by knakto            #+#    #+#             */
/*   Updated: 2024/07/17 18:42:29 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != 0)
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_strlen("toonnarank123"));
}
*/
