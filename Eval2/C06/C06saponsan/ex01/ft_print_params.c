/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saponsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 00:33:21 by saponsan          #+#    #+#             */
/*   Updated: 2024/07/25 01:12:37 by saponsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writefn(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (j < argc)
	{
		while (argv[j][i] != '\0' && argc)
		{
			writefn(argv[j][i]);
			i++;
		}
		writefn('\n');
		i = 0;
		j++;
	}
	return (0);
}
