/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:55:36 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/12 02:25:02 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	int			sizesrc;

	d = dst;
	s = src;
	while (--dstsize)
	{
		d[dstsize - 1] = s[dstsize - 1];
	}
	sizesrc = ft_strlen(src);
	return (sizesrc);
}
