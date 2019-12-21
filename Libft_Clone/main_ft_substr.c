/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 06:47:02 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/21 11:31:16 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_substr(char const *main, unsigned int start, size_t sublen);

int main()
{
    char const main[] = "lorem ipsum dolor sit amet";
    unsigned int start = 400;
    size_t sublen = 20;
    printf("%s\n", ft_substr(main, start, sublen));
    return (0);
}