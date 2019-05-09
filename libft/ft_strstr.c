/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:36:43 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 11:49:55 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *st;
	char *nd;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
		{
			st = (char *)haystack;
			nd = (char *)needle;
			while (*st && *nd && *st == *nd)
			{
				st++;
				nd++;
			}
			if (*nd == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
