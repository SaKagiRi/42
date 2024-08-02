/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaziev <skhaziev@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:07:00 by skhaziev          #+#    #+#             */
/*   Updated: 2024/07/18 02:16:12 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || \
			c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_isminus(char *str)
{
	int	i;

	i = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	if (i < 0)
		return (-1);
	return (1);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

unsigned int	ft_count_digits(char *str)
{
	unsigned int	i;
	unsigned int	count;

	count = 10;
	i = 1;
	while (ft_isdigit(*str) && count--)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	count_digit;
	int	total;
	int	tmp_mult;
	int	tmp_ten;

	tmp_ten = 1;
	total = 0;
	count_digit = 10;
	while (ft_isspace(*str))
		str++;
	minus = ft_isminus(str);
	while (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str) && count_digit--)
	{
		tmp_mult = ft_count_digits(str);
		while ((--tmp_mult - 1))
			tmp_ten *= 10;
		total += (((int)(*str - 48)) * tmp_ten);
		tmp_ten = 1;
		str++;
	}
	return (total * minus);
}

