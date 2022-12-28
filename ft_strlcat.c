/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwareepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:07:59 by pwareepo          #+#    #+#             */
/*   Updated: 2022/10/30 18:28:11 by pwareepo         ###   ########.fr       */
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
}