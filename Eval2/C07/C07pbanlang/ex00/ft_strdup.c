/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:59:07 by pbanlang          #+#    #+#             */
/*   Updated: 2024/08/01 16:13:34 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = NULL;
	while (src[i] != '\0')
	{
		i++;
	}
	p = (char *)malloc(i + 1);
	if (p == NULL)
	{
		return (p);
	}
	while (src[j] != '\0')
	{
		p[j] = src[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
// int main(int ac, char *av[])
// {
//     printf("%ld bf",sizeof(av[1]));
//     printf("\n");
//     printf("%s bf",av[1]);
//     printf("\n");
//     // write(1, "\n", 1);
//     // write(1, av[1], sizeof(av[1]));
//     // char s[] = av[1];
//     char *pp = ft_strdup(av[1]);
//     printf("%s S",pp);
//     free(pp);
// }
