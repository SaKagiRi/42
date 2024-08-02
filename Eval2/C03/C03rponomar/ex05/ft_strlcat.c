/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rponomar <rponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:53:25 by rponomar          #+#    #+#             */
/*   Updated: 2024/07/17 20:15:12 by rponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*run_dest;
	char			*run_src;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	src_len = 0;
	run_dest = dest;
	run_src = src;
	while (*run_src++)
		src_len++;
	while (*run_dest++)
		dest_len++;
	run_dest--;
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	while (*src && (run_dest - dest) < (size - dest_len -1))
	{
		*run_dest = *src;
		src++;
		run_dest++;
	}
	if ((run_dest - dest) < (size - dest_len))
		*run_dest = '\0';
	return (dest_len + src_len);
}

// int main()
// {
// 	char f1[] = "test";
// 	char f2[] = "\0";
// 	char fc1[] = "test";
// 	char fc2[] = "\0";
// 	char s1[] = "TEST";
// 	char s2[] = "\0";
// 	char s3[] = "\0";
// 	char s4[] = "\0";
// 	char s5[] = "\0";
// 	char s6[] = "\0";	
// 	char *ff[] = {f1, f2};
// 	char *ffc[] = {fc1, fc2};
// 	char *ss[] = {s1, s2, s3, s4, s5, s6};
// 	int n1 = 5;
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
// 			while (nnn < 1)
// 			{
// 				//j++;
// 				char *f = ff[fff];
// 				char *s = ss[sss];
// 				char *fc = ffc[fff];
// 				int n = nn[nnn];
// //("o : %s<<\n my : %s<<\n\n", strcat(f, s), ft_strcat(f, s));
// 				int p1, p2;
// 				p1 = strlcat(f, s, n);
// 				p2 = ft_strlcat(fc, s, n);
// 				printf("o : %d | %d : my\n", p1, p2);
// 				while (*f)
// 					write(1, fc++, 1);
// 				write(1, "<<", 2);
// 				write(1, "\n", 1);
// 				while (*fc)
// 					write(1, fc++, 1);
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