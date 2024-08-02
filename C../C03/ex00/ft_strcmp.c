/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:16:58 by knakto            #+#    #+#             */
/*   Updated: 2024/07/22 13:36:51 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s1[i] != '\0' || s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			cmp += s1[i] - s2[i];
			return (cmp);
		}
		i++;
	}
	return (cmp);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d", ft_strcmp(av[1], av[2]));
}
*/
