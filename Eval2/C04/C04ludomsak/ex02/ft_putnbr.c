/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludomsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 04:44:02 by ludomsak          #+#    #+#             */
/*   Updated: 2024/07/22 21:46:50 by ludomsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	x;

	x = (long int) nb;
	if (x == 0)
	{
		ft_putchar('0');
	}
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
	}
	if (x >= 9)
	{
		ft_putnbr(x / 10);
	}
	ft_putchar(x % 10 + 48);
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/
