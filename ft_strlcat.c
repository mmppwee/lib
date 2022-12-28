/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:07:59 by pwareepo          #+#    #+#             */
/*   Updated: 2022/12/28 14:51:01 by pwareepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)    
{
    int slen;
    int dlen;
    slen = ft_strlen(src);
    dlen = ft_strlen(dst);
    


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size > (unsigned int)ft_strlen(dest))
	{
		while (dest[j] != '\0')
			j++;
		while (src[i] != '\0' && i < size - ft_strlen(dest) - 1)
		{			
			dest[j] = src[i];
			j++;
			i++;
		}	
		dest[j] = '\0';
		return (ft_strlen(dest) + ft_strlen(src));
	}
	return (ft_strlen(src) + size);
}	

}