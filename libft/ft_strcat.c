/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:02:59 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/09 16:03:07 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int cout;
	int i;

	i = 0;
	cout = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[cout + i] = s2[i];
		i++;
	}
	s1[cout + i] = '\0';
	return (s1);
}
