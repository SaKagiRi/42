/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkongboo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:31 by tkongboo          #+#    #+#             */
/*   Updated: 2024/07/17 19:44:32 by tkongboo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printff(char aoa, char b, char c)
{
	write(1, &aoa, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (aoa != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	char	aoa;
	char	b;
	char	c;

	aoa = '0';
	while (aoa <= '7')
	{
		b = aoa + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				printff(aoa, b, c);
				c++;
			}
			b++;
		}
		aoa++;
	}
}
