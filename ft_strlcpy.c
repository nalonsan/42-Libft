#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t len_dst)
{
  unsigned char *d;
  unsigned char *s;
  size_t        n;
  
  d = (unsigned char *)dst;
  s = (unsigned char *)src;
  n = size_t len_dst;
  while (n < len_dst)
  {
    n++;
    if((*dst = *src) == '\0')
      break ;
  }
  if (n < len_dst)
    return (n);
  if (n > 0)
    *(dst - 1) = '\0';
  return (n + strlen (src));
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
