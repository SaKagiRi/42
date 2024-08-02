/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:51:18 by knakto            #+#    #+#             */
/*   Updated: 2024/07/27 20:04:58 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(4));
}
*/
