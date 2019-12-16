/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 06:47:02 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/13 08:32:32 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_substr(char const *main, unsigned int start, size_t sublen);

int main()
{
    char const main[] = "cada hombre a sus zapatos";
    unsigned int start = 122;
    size_t sublen = 4;
    printf("%s\n", ft_substr(main, start, sublen));
    return (0);
}