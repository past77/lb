/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:48:33 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/15 15:11:57 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	char	*fml;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	len = ft_strlen(ss1) + ft_strlen(ss2);
	fml = (char *)malloc(sizeof(*fml) * (len + 1));
	if (fml == NULL)
		return (NULL);
	ft_strcpy(fml, ss1);
	ft_strcat(fml, s2);
	return (fml);
}
