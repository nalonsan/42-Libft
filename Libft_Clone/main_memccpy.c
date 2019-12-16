/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:39:20 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:52:41 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     main()
(
    char dst[100] = "I am in a zombie today";
    char src[50] = "Breath and keep going";
    int c = 122;
    size_t n = 12;

    memccpy(dst, src, c, n);
    printf("Must behave: %s\n", dst);
    ft_memccpy(dst, src, c, n);
    printf("Result: %s\n", dst);
    return (0);
}