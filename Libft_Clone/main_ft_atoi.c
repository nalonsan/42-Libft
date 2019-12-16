/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 08:44:11 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/28 07:15:54 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     ft_atoi(const char *s);

int     main()
{
    char s[] = "-guHt67k93+fghj345";
    printf("%d\n", ft_atoi(s));
    return (0);
}