/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkongboo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:44 by tkongboo          #+#    #+#             */
/*   Updated: 2024/07/17 21:29:53 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	printtwodigits(int num)
{
	char	tens;
	char	units;

	if (num >= 0 && num < 10)
	{
		printchar('0');
		printchar(num + '0');
	}
	else if (num >= 10 && num <= 99)
	{
		tens = (num / 10) + '0';
		units = (num % 10) + '0';
		printchar(tens);
		printchar(units);
	}
}

void	supper_filter(int you, int me)
{
	printtwodigits(you);
	printchar(' ');
	printtwodigits(me);
	if (you != 98 || me != 99)
	{
		printchar(',');
		printchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	you;
	int	me;

	you = 0;
	while (you <= 98)
	{
		me = you + 1;
		while (me <= 99)
		{
			supper_filter(you, me);
			me++;
		}
		you++;

	}
}

int	main()
{
	ft_print_comb2();	
}
