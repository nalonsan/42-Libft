/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:37:33 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:56:33 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t				len;

	str1 = s1;
	str2 = s2;
	len = 0;
	while (len < n)
	{
		if (str1[len] == str2[len])
			len++;
		if (str1[len] < str2[len])
		{
			return (str1[len] - str2[len]);
			len++;
		}
		else if (str1[len] > str2[len])
		{
			return (str1[len] - str2[len]);
			len++;
		}
	}
	return (0);
}
