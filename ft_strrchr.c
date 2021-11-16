/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:11:18 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/16 12:11:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len_s;

    len_s = strlen(s) - 1;
    while (s[len_s] != 0)
    {
        if (s[len_s] == c)
        {
            return (char *)&s[len_s];
        }
        len_s--;
    }
    return (NULL);
}
