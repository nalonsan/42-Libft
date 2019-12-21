/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:29:51 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/19 08:46:06 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = +1;
	while (*str == '\r' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\n' || *str == ' ')
		++str;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		++str;
	}
	return (num * sign);
}
