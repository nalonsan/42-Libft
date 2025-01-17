/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 08:25:46 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/19 08:55:47 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int p;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n <= 9)
	{
		p = n % 10;
	}
	if (n > 9)
	{
		p = n % 10;
		n = n / 10;
		ft_putnbr_fd(n, fd);
	}
	p = p + 48;
	write(fd, &p, 1);
}
