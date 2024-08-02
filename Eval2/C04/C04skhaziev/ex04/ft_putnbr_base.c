/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaziev <skhaziev@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:58:09 by skhaziev          #+#    #+#             */
/*   Updated: 2024/07/18 02:27:55 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_check_base(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	if (!(*str))
		return (0);
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (0);
		while (str[i])
		{
			if (*str == str[i])
				return (0);
			i++;
		}
		i = 1;
		str++;
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = ft_check_base(base);
	if (base_length)
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		if (nbr >= base_length)
		{
			ft_putnbr_base(nbr / base_length, base);
			ft_putchar(base[nbr % base_length]);
		}
		else
			ft_putchar(base[nbr % base_length]);
	}
}

int	main()
{
	ft_putnbr_base(22,"01");
}
