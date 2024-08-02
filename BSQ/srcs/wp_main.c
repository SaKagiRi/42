/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wp_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludomsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:19:38 by ludomsak          #+#    #+#             */
/*   Updated: 2024/07/31 16:31:12 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "central.h"

void	standard_input(void)
{
	if (!search_square(0))
		write(2, "map error\n", 10);
}

int	main(int argc, char *argv[])
{
	int	fd;
	int	index;

	index = 1;
	if (argc == 1)
		standard_input();
	else
	{
		while (index < argc)
		{
			fd = open(argv[index], O_RDONLY);
			if (fd == -1)
				write(2, "map error\n", 10);
			else
			{
				if (!search_square(fd))
					write(2, "map error\n", 10);
				close(fd);
			}
			index++;
		}
	}
	return (0);
}
