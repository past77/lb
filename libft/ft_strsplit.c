/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:49:01 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/15 14:18:36 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static size_t	ft_count_word(char	const *s, char c)
{
	size_t		j;
	size_t		i;

	j = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_len_of_word(char const *s, char c, size_t i)
{
	size_t		j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	char		**res;
	size_t		len;
	int			j;

	i = 0;
	len = -1;
	if (s)
	{
		if (!(res = (char**)malloc(sizeof(char*) * ft_count_word(s, c) + 1)))
			return (NULL);
		while (++len < (ft_count_word(s, c)))
		{
			while (s[i] == c)
				i++;
			res[len] = ft_strnew(ft_len_of_word(s, c, i));
			j = 0;
			while (s[i] && s[i] != c)
				res[len][j++] = s[i++];
			res[len][j] = '\0';
		}
		res[len] = NULL;
		return (res);
	}
	return (NULL);
}
