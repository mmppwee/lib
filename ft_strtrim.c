#include <stdio.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int s1len;
    s1len = ft_strlen(s1) - 1;
    if (!s1 || !set)
        return (NULL);
    while (ft_strchr(set, *s1) && *s1)
        s1++;
    while (ft_strchr(set, s1[s1len]) && s1len > 0)
        s1len--;
    return (ft_substr(s1, 0, s1len + 1));
}

// int main(void)
// {
//     char *a;
//     a = ft_strtrim("aapplaadscppaap", "ap");
//     printf("Thid is a ==> [%s]\n", a);
//     /*
//     s1 = HelllolkeHl;
//     set = lHe;
//     res => olk;
//     */
// }