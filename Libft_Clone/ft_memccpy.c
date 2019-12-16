/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:31:53 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:56:05 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*final;
	unsigned char	*origin;

	final = (unsigned char *)dst;
	origin = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		final[i] = origin[i];
		if (final[i] == c)
		{
			return ((void *)(dst + i + 1));
		}
		i++;
	}
	return (0);
}
