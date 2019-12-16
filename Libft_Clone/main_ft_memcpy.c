/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:59:19 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/26 08:37:59 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main()
{
	char dst[30] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	const char src[30] = "zy\0xw\0vu\0\0tsr";
	size_t n = 11;
	printf("memcpy = %s\n", memcpy(dst, src, n));
	printf("ft_mem = %s\n", ft_memcpy(dst, src, n));
	return (0);
}

//	zyxwvutsrqponmlkjihgfedcba
//	zyxwvutst
//	zy\0xw\0vu\0\0tsr