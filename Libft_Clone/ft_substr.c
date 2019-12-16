/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 06:46:44 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/13 08:51:18 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *main, unsigned int start, size_t sublen)
{
	unsigned int	i;
	unsigned int	l;
	char			*index;
	//size_t			mainlen;
	char			*substr;

	l = 0;
	if (!(main))
		return (NULL);
	while (main[l] != '\0')
		l++;
	//mainlen = strlen(main);
	index = strchr(main, start);
	if (!(substr = malloc(sizeof(char) * sublen)))
		return (NULL);
	i = 0;
	while (substr[i] && i < (unsigned char)index)
		substr[i] = main[l + start];
		i++;
		l++;
	substr[i] = '\0';
	return (substr);
}