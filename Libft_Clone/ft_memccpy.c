/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:31:53 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/21 09:12:04 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*final;
	unsigned char	*origin;
	unsigned char	ce;

	final = (unsigned char *)dst;
	origin = (unsigned char*)src;
	ce = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		final[i] = origin[i];
		if (final[i] == ce)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (0);
}
