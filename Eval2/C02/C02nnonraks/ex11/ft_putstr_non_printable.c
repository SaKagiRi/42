/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnonraks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:31:41 by nnonraks          #+#    #+#             */
/*   Updated: 2024/07/22 21:42:48 by nnonraks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_hex(char str);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			if (str[i -1] != 92)
			{
				write(1, "\\", 1);
			}
			ft_to_hex(str[i]);
		}
		i++;
	}
}

void	ft_to_hex(char str)
{
	char	*char_set;
	int		dec;
	int		hex1;
	int		hex2;

	char_set = "0123456789abcdef";
	dec = str;
	hex1 = char_set[dec / 16];
	hex2 = char_set[dec % 16];
	write(1, &hex1, 1);
	write(1, &hex2, 1);
}
