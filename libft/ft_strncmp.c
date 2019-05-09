/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 18:04:46 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 18:49:24 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	if (!n || (!s1 && !s2))
		return (0);
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (int)n)
		i++;
	if (i == (int)n)
		return (s3[i - 1] - s4[i - 1]);
	return (s3[i] - s4[i]);
}
