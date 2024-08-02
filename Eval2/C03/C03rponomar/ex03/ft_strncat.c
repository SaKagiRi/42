/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponomar <rponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:53:25 by rponomar          #+#    #+#             */
/*   Updated: 2024/07/17 17:14:12 by rponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*run_dest;

	run_dest = dest;
	while (*run_dest)
		run_dest++;
	while (*src && nb > 0)
	{
		*run_dest = *src;
		src++;
		run_dest++;
		nb--;
	}
	*run_dest = '\0';
	return (dest);
}

// int main()
// {
// 	char f1[] = "123\0";
// 	char f2[] = "\0";
// 	char fc1[] = "123\0";
// 	char fc2[] = "\0";
// 	char s1[] = "ab";
// 	char s2[] = "\0";
// 	char s3[] = "\0";
// 	char s4[] = "\0";
// 	char s5[] = "\0";
// 	char s6[] = "\0";	
// 	char *ff[] = {f1, f2};
// 	char *ffc[] = {fc1, fc2};
// 	char *ss[] = {s1, s2, s3, s4, s5, s6};
// 	int n1 = 0;
// 	int n2 = 1;
// 	int n3 = 3;
// 	int n4 = 4;
// 	int n5 = 5;
// 	int nn[] = {n1, n2, n3, n4, n5};
// 	int fff, sss, nnn;
// 	fff = sss = nnn = 0;
// 	//int j = 0;
// 	while (fff < 1)
// 	{
// 		while (sss < 1)
// 		{
// 			while (nnn < 2)
// 			{
// 				//j++;
// 				char *f = ff[fff];
// 				char *s = ss[sss];
// 				char *fc = ffc[fff];
// 				int n = nn[nnn];
// //("o : %s<<\n my : %s<<\n\n", strcat(f, s), ft_strcat(f, s));
// 				char *p1, *p2;
// 				p1 = strncat(f, s, n);
// 				p2 = ft_strncat(fc, s, n);
// 				while (*p1)
// 					write(1, p1++, 1);
// 				write(1, "<<", 2);
// 				write(1, "\n", 1);
// 				while (*p2)
// 					write(1, p2++, 1);
// 				write(1, "<<", 2);
// 				write(1, "\n", 1);
// 				write(1, "\n", 1);
// 				nnn++;
// 			}
// 			nnn = 0;
// 			sss++;
// 		}
// 		sss = 0;
// 		fff++;
// 	}
// 	write(1, "<<END", 5);
// 	write(1, "\n", 1);
// 	return 0;
// }