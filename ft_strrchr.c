#include "libft.h"
#include "ft_strlen.c"

char    *ft_strrchr(const char *s, int c)
{
    int len;
    len = ft_strlen(s);
    int i;
    i = len;
	while (s[i] != c)
        i--;
	return ((char*)&s[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    int len;
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }