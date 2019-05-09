/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:00:38 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 12:33:13 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cout1;

	i = 0;
	cout1 = ft_strlen(s1);
	while (s2[i] != '\0' && (i < n))
	{
		s1[cout1 + i] = s2[i];
		i++;
	}
	s1[cout1 + i] = '\0';
	return (s1);
}
