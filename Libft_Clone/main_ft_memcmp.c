/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:44:06 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/21 09:49:52 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
    char s1[] = "abcdefghij";
    char s2[] = "abcdefgxyz";
    size_t n = 7;
    printf("%d\n", memcmp(s1, s2, n));
    printf("%d\n", ft_memcmp(s1, s2, n));
    return (0);
}