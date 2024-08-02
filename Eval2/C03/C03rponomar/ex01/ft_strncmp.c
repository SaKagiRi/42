/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponomar <rponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:53:25 by rponomar          #+#    #+#             */
/*   Updated: 2024/07/17 16:03:30 by rponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((int)(*s1 - *s2));
}

// int main()
// {
// 	char f1[] = "\0";
// 	char f2[] = "123";
// 	char s1[] = "\0";
// 	char s2[] = "12";
// 	char s3[] = "1234";
// 	char s4[] = "132";
// 	char s5[] = "13";
// 	char s6[] = "134";	
// 	char *ff[] = {f1, f2};
// 	char *ss[] = {s1, s2, s3, s4, s5, s6};
// 	int n1 = 0;
// 	int n2 = 1;
// 	int n3 = 3;
// 	int n4 = 4;
// 	int n5 = 5;
// 	int nn[] = {n1, n2, n3, n4, n5};
// 	int fff, sss, nnn;
// 	fff = sss = nnn = 0;
// 	int j = 0;
// 	while (fff < 2)
// 	{
// 		while (sss < 6)
// 		{
// 				while (nnn < 5)
// 				{
// 					j++;
// 					char *f = ff[fff];
// 					char *s = ss[sss];
// 					int n = nn[nnn];
// ("%d) diff o - my = %d\n", j, strncmp(f, s, n) - ft_strncmp(f, s, n));
// 					nnn++;
// 				}
// 				nnn = 0;
// 				sss++;
// 		}
// 		sss = 0;
// 		fff++;
// 	}
// 	write(1, "<<END", 5);
// 	write(1, "\n", 1);
// 	return 0;
// }