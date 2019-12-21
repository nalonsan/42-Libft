/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:54:18 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/18 07:19:19 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2);

int main()
{
    char const s1[] = "dfghjkl";
    char const s2[] = "rtyuiop";
    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}