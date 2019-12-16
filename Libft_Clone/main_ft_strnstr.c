/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 06:38:05 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/03 08:32:00 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

int     main()
{
    char s1[] = "hola";
    char s2[] = "";
    size_t n = 0;
    printf("%s\n", ft_strnstr(s1, s2, n));
    printf("%s\n", strnstr(s1, s2, n));
    return (0);
}