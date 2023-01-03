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
    int i;
    int n;
    i = 0;
    n = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (s[i] != '\0')
            n++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    return (n);
}
// #include <stdio.h>
// int main(void)
// {
//     int i;
//     i = ft_wordcount(" Hello world aaa ", 'k');
//     printf ("%d\n", i);
// }



char **ft_split(char const *s, char c)
{
    static char *a;
    int i;
    int start;
    int end;
    a = (char *)malloc ((ft_wordcount((char *)s, c) + 1) * sizeof(char *));
    if (a == NULL)
        return (NULL);
    i = 0;

}

#include <stdio.h>
int main(void)
{
    char s[] = "  Hello world aaa ";
    printf("%c", **ft_split(s, ' '));
}