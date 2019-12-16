/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 19:03:08 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/16 19:16:17 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int nbr;
    
    if(n > 0)
        ft_putchar('-', fd);
        nbr = (unsigned int)(n * - 1);
    else
        nbr = (unsigned int)n;
    if (nbr >= 10)
        ft_putnbr_fd(nbr/10, fd);
    ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
