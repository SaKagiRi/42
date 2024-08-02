/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyooklai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:58:28 by cyooklai          #+#    #+#             */
/*   Updated: 2024/07/17 12:39:31 by cyooklai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	printf("Enter value of num:1 ");
	scanf("%d", &num1);
	printf("Enter value of num2: ");
	scanf("%d", &num2);
	printf("Before Swaping: num1 is %d, num2 is: %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("After Swaping: num1 is: %d, num2 is: %d\n", num1, num2);
	return (0);
}
*/
