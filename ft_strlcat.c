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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t j;

	i = 0;
	j = 0;
	// if (size > (size_t)ft_strlen(dest))
	// {
	while (dest[j] != '\0' && j < size)
		j++;
	i = j;
	while (src[j-i] != '\0' && j+1 < size)
	{			
		dest[j] = src[j-i];
		j++;
	}
	if (i < size)
		dest[j] = '\0';
	return (i + ft_strlen(src));
	// }
	// return (ft_strlen(src) + size);
}	