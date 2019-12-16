/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man_ft_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:45:57 by nalonso-          #+#    #+#             */
/*   Updated: 2019/11/21 11:52:41 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int     ft_isascii(int c)

int     main()
(
    int c;
    c = 129;
    printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));
    return (0);
}