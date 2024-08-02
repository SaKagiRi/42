/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kthangth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:26:11 by kthangth          #+#    #+#             */
/*   Updated: 2024/07/31 12:50:01 by kthangth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define EVEN	ft_even
# define TRUE	1
# define FALSE	0

int	ft_even(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	else
		return (0);
}

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0

#endif
