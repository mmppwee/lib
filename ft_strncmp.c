#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    if (n == 0)
        return (0);
    while (--n && s1[i] == s2[i])
            i++;
    return (s1[i]-s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    strcpy(str1, "abcdef");
//    strcpy(str2, "ABCDEF");

//    ret = ft_strncmp(str1, str2, 4);
//    printf("%d\n", ret);
   
//    return(0);
// }