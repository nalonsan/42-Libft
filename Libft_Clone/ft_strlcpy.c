/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 08:36:57 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/03 08:37:01 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
	unsigned int	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (len_dst == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (len_dst - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
