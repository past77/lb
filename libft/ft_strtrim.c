/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:10:50 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 14:55:18 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fml;
	int		len;
	char	*ret;
	char	*s1;

	if (!s)
		return (NULL);
	s1 = (char *)s;
	len = ft_strlen((char *)s) - 1;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (s == NULL || !s)
		return (NULL);
	if (*s == '\0')
		return (ft_strnew(0));
	fml = s1 + len;
	while (*fml == ' ' || *fml == '\n' || *fml == '\t')
		fml--;
	ret = ft_strsub(s, 0, fml - s + 1);
	return (ret);
}
