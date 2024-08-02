/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:34:34 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/28 20:36:38 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Turn-in directory : ex02/
Files to turn in : ft_putnbr.c
Allowed functions : write
*/
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	res;

	if (nb == -2147483648)
		write(STDOUT_FILENO, "-2147483648", 11);
	else if (nb != -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr (nb / 10);
		res = nb % 10 + 48;
		ft_putchar(res);
	}
}
