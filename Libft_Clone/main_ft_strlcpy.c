/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 07:13:19 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/02 06:16:41 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t len_dst);

int main()
{
    char *dst = "";
    char src[] = "hola que tal";
    size_t len_dst = 0;
    printf("%zu\n", ft_strlcpy(dst, src, len_dst));
    return (0);
}