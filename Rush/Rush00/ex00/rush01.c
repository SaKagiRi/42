/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:37:43 by knakto            #+#    #+#             */
/*   Updated: 2024/07/14 19:38:41 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	start(int i, int x);
void	c(int i, int x);
void	e(int i, int x, int area);

void	rush(int x, int y)
{
	int	area;
	int	i;

	area = x * y;
	i = 0;
	if (x < 0 || y < 0)
		write(1, "it negative.", 11);
	else if (x == 0 || y == 0)
		write(1, "There's nothing at all.Press more nuber", 39);
	else if (x > 0 && y > 0)
	{
		while (i++ < area)
		{
			if (i <= x)
				start(i, x);
			else if (i > (area - x) && i <= area)
				e(i, x, area);
			else
				c(i, x);
			if (i % x == 0)
				write(1, "\n", 1);
		}
	}
}

void	e(int i, int x, int area)
{
	if (i == area)
		ft_putchar('/'); //er
	else if (i == (area - x) + 1)
		ft_putchar('\\'); //el
	else if (i > ((area - x) + 1) && i < area)
		ft_putchar('*'); //ec
}

void	c(int i, int x)
{
	if (i % x == 1)
		ft_putchar('*'); //ml
	else if (i % x == 0)
		ft_putchar('*'); //mr
	else
		ft_putchar(' '); //mc
}

void	start(int i, int x)
{
	if (i == 1)
		ft_putchar('/'); //sl
	else if (i == x)
		ft_putchar('\\'); //sr 
	else if (i > 1 && i < x + '0')
		ft_putchar('*'); //sc
}
