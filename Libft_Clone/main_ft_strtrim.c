/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:55:27 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/18 08:17:45 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set);

int main()
{
    char const s1[] = "dfghjjugkl";
    char const set[] = "jug";
    printf("%s\n", ft_strjoin(s1, set));
    return (0);
}