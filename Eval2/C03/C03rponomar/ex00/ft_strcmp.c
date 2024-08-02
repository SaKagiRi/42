/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponomar <rponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:53:25 by rponomar          #+#    #+#             */
/*   Updated: 2024/07/17 15:48:59 by rponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
	}
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
// 	int fff, sss;
// 	fff = sss = 0;
// 	int j = 0;
// 	while (fff < 2)
// 	{
// 		while (sss < 6)
// 		{
// 				j++;
// 				char *f = ff[fff];
// 				char *s = ss[sss];
//("%d) o : %d | %d : my_f\n", j, strcmp(f, s), ft_strcmp(f, s));
// 				sss++;
// 		}
// 		sss = 0;
// 		fff++;
// 	}
// 	write(1, "<<END", 5);
// 	write(1, "\n", 1);
// 	return 0;
// }