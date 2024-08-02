/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_the_math.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsatsar <ytsatsar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:32:25 by ytsatsar          #+#    #+#             */
/*   Updated: 2024/08/01 18:36:47 by ytsatsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(char arr[], int count);

void	ft_putnbr(int nb);

void	do_the_math(int num1, char op, int num2)
{
	if (op == '/' && num2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	if (op == '%' && num2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	if (op == '+')
		ft_putnbr(num1 + num2);
	else if (op == '-')
		ft_putnbr(num1 - num2);
	else if (op == '*')
		ft_putnbr(num1 * num2);
	else if (op == '/')
		ft_putnbr(num1 / num2);
	else if (op == '%')
		ft_putnbr(num1 % num2);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	arr[10];
	int		index;

	index = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb != 0)
	{
		arr[index] = nb % 10 + '0';
		nb /= 10;
		index++;
	}
	print_array(arr, index);
}

void	print_array(char arr[], int count)
{
	count--;
	while (count >= 0)
	{
		write(1, &arr[count], 1);
		count--;
	}
}
