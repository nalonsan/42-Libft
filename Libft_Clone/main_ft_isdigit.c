/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:43:11 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:52:41 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <ctype.h>
#include <stdio.h>

int     ft_isdigit(int c);

int main()
(
    int c;

    c = 50;
    printf("%d\n", ft_isdigit(c));
    printf("%d\n", isdigit(c));
}