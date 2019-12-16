/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:31:28 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/10 07:48:29 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = (ft_strlen(dst) + ft_strlen(src));
	if (n <= ft_strlen(dst))
		return (ft_strlen(src) + n);
	while (*dst)
		dst++;
	i = 0;
	while (i < n - (len - ft_strlen(src) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
