/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 08:56:24 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/19 08:15:15 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd);

int main()
{
    int n = 58;
    int fd = 2;
    ft_putnbr_fd(n, fd);
}