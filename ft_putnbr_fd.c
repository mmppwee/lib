#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;
    if (n <= 9)
        c = n + 48;
        write (fd, c, 1);
        
}