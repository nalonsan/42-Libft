/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 08:57:24 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/21 09:03:56 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int main()
{
	char dst[] = "abcdefghijklmnopqrstuvwxyz";
	const char src[] = "string with \200 inside !";
    int c = '\200';
	size_t n = 21;
	printf("memcpy = %s\n", memccpy(dst, src, c, n));
	printf("ft_mem = %s\n", ft_memccpy(dst, src, c, n));
	return (0);
}