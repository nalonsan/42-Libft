/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalonso- <nalonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 06:46:44 by nalonso-          #+#    #+#             */
/*   Updated: 2019/12/16 09:03:53 by nalonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *main, unsigned int start, size_t size)
{
	/*unsigned int	i;
	  size_t			mainlen;
	  char			*sub;

	  if (!main)
	  return (NULL);
	  mainlen = strlen(main);
	  if (mainlen < start)
	  {
	  if (!(sub = malloc(sizeof(char) * 1)))
	  return (NULL);
	  sub[0] = '\0';
	  return (sub);
	  }
	  if (!(sub = malloc(sizeof(char) * (sublen + 1))))
	  return (NULL);
	  while (*main)
	  main++;
	  i = 0;
	  while (i < sublen)
	  {
	  sub[i] = main[i + start];
	  i++;
	  }
	  sub[i] = '\0';
	  return (sub);
	  }*/
	char			*new;
	unsigned int	i;

	if (!main)
		return (NULL);
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size)
		new[i++] = main[start++];
	new[i] = '\0';
	return (new);
}
