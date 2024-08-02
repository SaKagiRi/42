/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panothai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:29:40 by panothai          #+#    #+#             */
/*   Updated: 2024/07/11 09:52:20 by panothai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar((char)(num1 / 10) + '0');
			ft_putchar((char)(num1 % 10) + '0');
			write(1, " ", 1);
			ft_putchar((char)(num2 / 10) + '0');
			ft_putchar((char)(num2 % 10) + '0');
			if (num1 == 98)
			{
				break ;
			}
			write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
