#include "libft.h"
/*
s => [32][32][32][a][b][c][32][32][d][e][f][32][\0]
c => [32]

1. ตัด 32 หน้าหลังออก
2. นับจำนวนกลุ่มคำ แล้ว นำจำนวนที่ได้มาจองพื้นที่
3. นับจำนวนตัวอักษรในกลุ่มคำนั่นๆ แล้ว นำจำนวนนั่นมาจองพื้นที่
4. return 2d arr
*/
int ft_wordcount(char *s, char c)
{
    char *a;
    int i;
    int n;
    a = s;
    i = 0;
    n = 0;
    while (a[i] != '\0')
    {
        while (a[i] == c && a[i] != '\0')
            i++;
        while (a[i] != c && a[i] != '\0')
            i++;
        n++;
    }
    return (n);
}
#include <stdio.h>
int main(void)
{
    int i;
    i = ft_wordcount(" Hello world aaa ",' ');
    printf ("%d\n", i);
}

// char **ft_split(char const *s, char c)
// {
    
// }