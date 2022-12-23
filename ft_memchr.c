#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char *a = (char*)s;
    int i;
    i = 0;
    while (a[i] != '\0' && i < n)
    {
        if (a[i] == c)
            return (&a[i]);
        i++;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }