/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:32:51 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/28 22:16:54 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Turn-in directory : ex01/
Files to turn in : ft_putstr.c
Allowed functions : write
*
*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*i;

	i = "!i!i!";
	ft_putstr(i);
	return (0);
}*/
