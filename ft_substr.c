#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    while (s[i] && s[i] != (char)start)
        i++;
    if (s[i] == (char)start)
    {
        while (i < len)
            i++;
    }
}