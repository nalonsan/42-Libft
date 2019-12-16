/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 07:29:56 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/12 09:06:26 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char				*ptr;
	unsigned int		i;
	unsigned int		total;

	total = (count * size);
	ptr = malloc(total);
	if ((!(ptr)) || ptr == NULL)
		return (NULL);
	i = 0;
	while (total--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
