/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 00:25:14 by knakto            #+#    #+#             */
/*   Updated: 2024/07/13 23:07:41 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	e;
	char	p;

	e = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &e, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
/*
int	main()
{
	ft_is_negative(-9);
	ft_is_negative(0);
	ft_is_negative(9);

}*/
