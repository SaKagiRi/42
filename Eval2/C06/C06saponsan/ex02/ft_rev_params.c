/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saponsan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 00:56:26 by saponsan          #+#    #+#             */
/*   Updated: 2024/07/25 01:14:49 by saponsan         ###   ########.fr       */
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
		while (argv[argc - j][i] != '\0' && argc)
		{
			writefn(argv[argc - j][i]);
			i++;
		}
		writefn('\n');
		i = 0;
		j++;
	}
	return (0);
}
