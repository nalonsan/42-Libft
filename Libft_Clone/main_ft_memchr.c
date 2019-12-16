/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:12:15 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:52:41 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n);
int main()
(
    char s[50] = "aprendiendo a programar";
    int c = 114;
    size_t n = 7;

    printf("%s\n", (char *)memchr(s, c, n));
    printf("%s\n", (char *)ft_memchr(s, c, n));
    return (0);
}