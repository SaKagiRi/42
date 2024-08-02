/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayang-en <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:15:09 by ayang-en          #+#    #+#             */
/*   Updated: 2024/07/14 19:35:28 by ayang-en         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_char(int a, int b, int c)
{
	int	space;
	int	comma;
	int	x;
	int	y;
	int	z;

	x = a + 48;
	y = b + 48;
	z = c + 48;
	comma = 44;
	space = 32;
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				get_char(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//	return (-1);
//}
