/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:33:51 by pwareepo          #+#    #+#             */
/*   Updated: 2022/10/30 18:24:17 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	c;
	int	i;

	c = ft_strlen(src);
	i = 0;

	if (dstsize != 0);
		while (src[i] != '\0' && i < dstsize - 1)
		{
	       		dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	return (c);
}

#include <stdio.h>
void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}