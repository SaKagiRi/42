/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayang-en <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:12:35 by ayang-en          #+#    #+#             */
/*   Updated: 2024/07/14 20:02:00 by ayang-en         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power(int digit)
{
	int	p;
	int	i;

	p = 1;
	i = 1;
	while (i < digit)
	{
		p *= 10;
		i++;
	}
	return (p);
}

void	print(int c, int nb)
{
	int	i;
	int	digit;
	int	power;
	int	x;
	int	x_c;

	i = 0;
	digit = c;
	while (i < c)
	{
		power = ft_power(digit);
		x = nb / power;
		nb -= x * power;
		x_c = x + 48;
		write(1, &x_c, 1);
		digit--;
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	count;
	int	nb2;

	nb2 = nb;
	count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	print(count, nb2);
}

//int	main(void)
//{
//	ft_putnbr(452452);
//	return (0);
//}
