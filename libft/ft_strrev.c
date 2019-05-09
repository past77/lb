/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:08:07 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/11 13:30:47 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrev(char *str)
{
	char	*res;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(str);
	res = (char *)malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	if (i)
	{
		res[i--] = '\0';
		while (str[i] && str)
			res[i--] = str[j++];
	}
	return (res);
}
