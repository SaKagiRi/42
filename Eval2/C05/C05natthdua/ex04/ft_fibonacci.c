/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natthdua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 01:45:10 by natthdua          #+#    #+#             */
/*   Updated: 2024/07/29 16:50:48 by natthdua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Turn-in directory : ex04/
Files to turn in : ft_fibonacci.c
Allowed functions : None*/

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(36));
}*/
