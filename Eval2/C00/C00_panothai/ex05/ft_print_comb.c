/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panothai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:12:02 by panothai          #+#    #+#             */
/*   Updated: 2024/07/10 17:13:45 by panothai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char digit1, char digit2, char digit3)
{
	write(1, &digit1, 1);
	write(1, &digit2, 1);
	write(1, &digit3, 1);
}

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				ft_print(digit1, digit2, digit3);
				if ((digit1 == '7') && (digit2 == '8') && (digit3 == '9'))
				{
					break ;
				}
				write(1, ", ", 2);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
