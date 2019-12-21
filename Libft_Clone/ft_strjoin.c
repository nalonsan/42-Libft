/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:53:57 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/19 08:07:07 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	int				total_len;
	unsigned int	i;
	unsigned int	y;

	if ((!s1) || (!s2))
		return (0);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(new = (char *)malloc(sizeof(char) * total_len)))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	y = 0;
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		new[i] = s2[y];
		i++;
		y++;
	}
	new[i] = '\0';
	return (new);
}
