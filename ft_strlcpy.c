#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
  
	j = 0;
	i = 0;
	while (src[j] != '\0')
		j++;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (j);
}

#include <string.h>
#include <stdio.h>

int main()
{
  char dst[50];
  char src[] = "hola que tal";
  printf("%d\n", ft_strlcpy);
  return (0);
}
