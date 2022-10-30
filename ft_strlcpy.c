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
	       		dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	return (c);
}
