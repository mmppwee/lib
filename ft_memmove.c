#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char*)dest;
    char *s = (char*)src;
    char *buffer;
    int i;
    i = 0;
    while (i < n)
    {
        buffer[i] = s[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        d[i] = buffer[i];
        i++;
    }
    return (d);
}

// #include <stdio.h> 
// #include <string.h> 
// int main() 
// { 
//     char csrc[100] = "Geeksfor"; 
//     memmove(csrc+5, csrc, strlen(csrc)+1); 
//     printf("%s\n", csrc); 
//     return 0; 
// } 