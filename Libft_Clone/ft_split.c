/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 07:12:21 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/20 07:36:43 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	nb_words;
	char	**tab;

	nb_words = 0;
	tab = NULL;
	i = 0;
	if (s && ((tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if ((end - start) > 0)
				tab[nb_words++] = ft_substr(s, start, end - start);
		}
		tab[nb_words] = 0;
	}
	return (tab);
}
