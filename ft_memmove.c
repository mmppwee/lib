#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *s;
    char *d;
    s = (char *)src;
    d = (char *)dest;
    size_t i;
    i = 0;
    if (d == NULL && s == NULL)
        return (NULL);
    if (d > s)
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}

// #include <stdio.h> 
// #include <string.h> 
// int main() 
// { 
//     char csrc[100] = "Geeksfora";
//     ft_memmove(csrc+4, csrc, strlen(csrc)+1);
//     printf("%s\n", sResult); 
//     return 0;
// } 