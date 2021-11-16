/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:05:50 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/16 12:05:53 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_atoi(const char *str)
{
    int sing;
    int ok;
    int i;

    ok = 0;
    i = 0;
    sing = 1;
    while (str[i] == ' '&& str[i] == '\t'&& str[i] =='\r' &&
     str[i] =='\n'&& str[i] =='\v'&& str[i] =='\f')
        i++;
    if (str[i] == '-')
        sing = -1 ;
    while (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0'&& str[i] <= '9')
    {
        ok = ok * 10 + str[i] - 48;
        i++;
    }
   return (ok * sing);
}