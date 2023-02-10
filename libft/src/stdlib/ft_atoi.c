/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:15:04 by dmatavel          #+#    #+#             */
/*   Updated: 2022/09/21 18:09:29 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	base;

	index = 0;
	sign = 1;
	base = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
		sign = 1 - 2 * (str[index++] == '-');
	while (ft_isdigit(str[index]))
	{
		base = base * 10 + str[index] - '0';
		index++;
	}
	return (sign * base);
}
