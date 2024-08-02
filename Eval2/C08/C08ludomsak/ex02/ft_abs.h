/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludomsak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:13:56 by ludomsak          #+#    #+#             */
/*   Updated: 2024/07/30 16:00:45 by ludomsak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(n) abs(n)

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

#endif
