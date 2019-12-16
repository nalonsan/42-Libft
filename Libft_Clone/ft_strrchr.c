/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:32:13 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/04 08:50:15 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				final_pos;
	int				i;

	str = (unsigned char *)s;
	final_pos = ft_strlen(s);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[final_pos] == c)
			return ((char *)&str[final_pos]);
		if (str[--final_pos] != c)
			i++;
	}
	if (c == '\0')
		return ((char*)str);
	return (NULL);
}
