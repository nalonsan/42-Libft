#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
  i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (strlen(src));
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
