/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:15:46 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/16 23:11:58 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int len_needle;
	
	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i])
	{

		if(haystack[i] == needle[j])
		{
			while(len_needle--)
			{
				haystack[i + len_needle] = needle[j];
				i++;
				j++;
			}
		}
		i++;
	}
	return NULL;
}
