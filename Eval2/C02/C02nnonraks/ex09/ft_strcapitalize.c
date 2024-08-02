/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnonraks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:43:08 by nnonraks          #+#    #+#             */
/*   Updated: 2024/07/21 22:46:25 by nnonraks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check(char *str);
int	ft_str_is_alpha(char *str);
int	upper(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0' && str[i] >= 97 & str[i] <= 122)
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 & str[i] <= 122) & !(check(&str[i -1])))
		{
			str[i] -= 32;
		}
		else if (check(&str[i]) && check(&str[i -1]) && upper(&str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	upper(char *str)
{
	if (*str >= 65 && *str <= 90)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
	{
		return (1);
	}
	return (0);
}

int	check(char *str)
{
	if (ft_str_is_alpha(str) || (*str >= 48 && *str <= 57))
	{
		return (1);
	}
	return (0);
}
