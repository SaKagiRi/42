/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsatsar <ytsatsar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:08:24 by ytsatsar          #+#    #+#             */
/*   Updated: 2024/08/01 18:35:48 by ytsatsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_operator(char c, char *operators);

int		get_length(char *str);

int		ft_atoi(char *str);

void	do_the_math(int num1, char op, int num2);

int	main(int argc, char **argv)
{
	char	operators[5];
	int		num1;
	int		num2;
	char	op;

	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '/';
	operators[3] = '*';
	operators[4] = '%';
	if (argc == 4)
	{
		if (check_operator(argv[2][0], operators) == 1)
			return (1);
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		op = argv[2][0];
		do_the_math(num1, op, num2);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		minus;
	long	count;
	int		index;

	index = 0;
	count = 0;
	minus = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			minus++;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		count *= 10;
		count += str[index] - '0';
		index++;
	}
	if (minus % 2 != 0)
		count *= -1;
	return ((int)count);
}

int	check_operator(char c, char *operators)
{
	int	i;

	i = 0;
	while (operators[i])
	{
		if (c == operators[i])
			return (0);
		i++;
	}
	write(1, "0\n", 2);
	return (1);
}

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_if_int(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
