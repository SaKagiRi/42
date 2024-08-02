/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:58:07 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/17 21:00:08 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		str++;
	}
}
/*
int	main(void)
{
	char	x[100];

	printf("in put some string : ");
	scanf("%s", x);
	printf("string that ues printf : ");
	printf("%s\n", x);
	ft_putstr(x);
}
*/
