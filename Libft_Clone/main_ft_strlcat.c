/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 08:08:50 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/10 07:17:33 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t n);

int main()
{
    char dst[] = "";
    char src[] = "bla ble bli blo blu";
    size_t n = 10;
    printf("%zu\n", ft_strlcat(dst, src, n));
    printf("%lu\n", strlcat(dst, src, n));
}