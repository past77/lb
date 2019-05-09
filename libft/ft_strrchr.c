/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 14:38:37 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 12:22:22 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *str1;

	str1 = (char *)str;
	if (ft_strchr(str1, c) == NULL)
		return (NULL);
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1 != c)
	{
		str1--;
	}
	return (str1);
}
