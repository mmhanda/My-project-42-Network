/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:54:56 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/12 02:28:09 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;
	size_t	len_d2;

	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	len_d2 = len_d;
	if (dstsize <= len_d)
		return (len_s + dstsize);
	else
	{
		while (i < dstsize - len_d)
		{
			dst[len_d] = src[i];
			i++;
			len_d++;
		}	
		dst[len_d] = 0;
		return (len_d2 + len_s);
	}
}
