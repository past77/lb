/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:00:19 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 14:13:10 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t		count_world(char	const *str, char c)
{
	size_t		j;
	size_t		i;

	j = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if ((str[i] == c && str[i + 1] != c) || str[i + 1] == '\0')
			j++;
		i++;
	}
	return (j);
}
