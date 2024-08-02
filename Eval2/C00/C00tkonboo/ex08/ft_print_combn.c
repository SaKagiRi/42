/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkongboo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:52:37 by tkongboo          #+#    #+#             */
/*   Updated: 2024/07/17 21:37:37 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Custom print function using write
void	printtf(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print_comb(char *comb, int n)
{
	write(1, comb, n);
	if (!(comb[0] == '9' - n + 1 && comb[n - 1] == '9'))
	{
		write(1, ", ", 2);
	}
}

void	generate_comb(char *comb, int index, int n, char start)
{
	while (index < n)
	{
		comb[index] = start;
		index++;
		start++;
	}
	print_comb(comb, n);
	while (index > 0)
	{
		--index;
		if (++comb[index] <= '9' - (n - index - 1))
		{
			while (++index < n)
			{
				comb[index] = comb[index - 1] + 1;
			}
			print_comb(comb, n);
		}
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n < 1 || n > 10)
		return ;
	generate_comb(comb, 0, n, '0');
}

int	main(int srgc, char *argv[])
{
	ft_print_combn(3);
}
