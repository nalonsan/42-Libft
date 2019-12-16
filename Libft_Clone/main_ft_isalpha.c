/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:34:06 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:52:41 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     ft_isalpha(int c);

int main()
(
    int c;
    c = 121;
    printf("%d\n", ft_isalpha(c));
    return (0);
}