/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:50:52 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/17 13:14:44 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (ft_strlen(str + 1) + 1);
}
/*
int	main(void)
{
	char	x[100];

	write(1, "count nun : ", 12);
	scanf("%s", x);
	printf("%d\n", ft_strlen(x));
}
*/
// https://www.youtube.com/watch?v=2AmfX5U-tIw
