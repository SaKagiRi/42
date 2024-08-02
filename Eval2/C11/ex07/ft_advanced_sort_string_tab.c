/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knakto <knakto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:34:39 by ytsatsar          #+#    #+#             */
/*   Updated: 2024/08/01 22:11:56 by knakto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char **a, char **b);

int		get_array_length(char **tab);

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	iterate;
	int	length;

	i = 0;
	iterate = 0;
	length = get_array_length(tab);
	while (iterate < length)
	{
		i = 0;
		while (i < (length - 1))
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
		iterate++;
	}
}
int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (s2[index] == '\0')
			return (s1[index]);
		else if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (s2[index] != '\0')
		return (-s2[index]);
	return (0);
}
#include <stdio.h>
int main(int c, char **v)
{
	char *array[] = {"abc", "32", "fd", "4342", "a", NULL}; //32 4342 a abc fd
	ft_advanced_sort_string_tab(array, &ft_strcmp);
	int i = 0;
	while (i < 5)
	{
		printf("%s\n", array[i++]);
	}
}

int	get_array_length(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
