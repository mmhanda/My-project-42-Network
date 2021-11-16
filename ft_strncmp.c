/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:07:57 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/16 12:07:59 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return 0;
}
