#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{i
    size_t i;
    size_t j;
    i = 0;
    if ((char *)&dest == 0 && (char *)&src == 0)
        return (NULL);
    if ((char *)dest > (char *)src)
    {
        while (n > 0)
        {
            (char *)&dest[n] = (char *)&src[n];
            n--;
        }
    }
    else
    {
        while (i < n)
        {
            (char *)&dest[i] = (char *)&src[i];
            i++;
        }
    }
    return ((char *)&dest);
}

#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char csrc[100] = "Geeksfora"; 
    memmove(csrc+4, csrc, strlen(csrc)+1); 
    printf("%s\n", csrc); 
    return 0;
} 