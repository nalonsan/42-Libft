/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:31:28 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/21 11:25:20 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dst[len] && len < n)
		len++;
	i = len;
	while (src[len - i] && len + 1 < n)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < n)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
