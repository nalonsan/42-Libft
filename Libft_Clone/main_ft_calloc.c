/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 07:29:52 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/12 07:15:28 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size);

int main()
{
    size_t count = 1;
    size_t size = 0;
    printf("%s\n", calloc(count, size));
    printf("%s\n", ft_calloc(count, size));
    return (0);
}