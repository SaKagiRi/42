/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaziev <skhaziev@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 06:08:44 by skhaziev          #+#    #+#             */
/*   Updated: 2024/07/18 02:09:55 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_check_negative(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		return (nb * -1);
	}
	return (nb);
}

int	ft_number_of_digits(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	else
	{
		while (nb)
		{
			nb /= 10;
			i++;
		}
	}
	return (i);
}

int	ft_mult(int size)
{
	int	mult;

	mult = 1;
	while (size > 1)
	{
		mult *= 10;
		size--;
	}
	return (mult);
}

void	ft_putnbr(int nb)
{
	int	size;
	int	mult_ten;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		nb = ft_check_negative(nb);
		size = ft_number_of_digits(nb);
		while (size > 0)
		{
			mult_ten = ft_mult(size);
			ft_putchar(nb / mult_ten + 48);
			nb = nb - (nb / mult_ten * mult_ten);
			mult_ten = 1;
			size--;
		}
	}
}

int	main()
{
	ft_putnbr(110201010);
}
