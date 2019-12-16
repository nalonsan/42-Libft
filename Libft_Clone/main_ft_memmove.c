/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:40:11 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/05 07:44:27 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n);

int main()
{
    char dst[] = "";
    char src[] = "";
    size_t n =  0;
    //printf("%s\n", memmove(dst, src, n));
    printf("%s\n", ft_memmove(dst, src, n));
    return (0);
}