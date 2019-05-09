/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:02:42 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/09 15:24:01 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnstr(const char *stack, const char *ne, size_t len)
{
	size_t	ln;
	size_t	p;
	int		s;
	size_t	d;

	ln = -1;
	if (!ft_strlen(ne))
		return ((char *)stack);
	while (*(stack + ++ln) && ln < len)
	{
		p = 0;
		if (*(stack + ln) == *ne)
		{
			d = ln;
			s = 1;
			while (*(stack + d) && *(ne + p) && d < len)
			{
				if (*(stack + d++) != *(ne + p++))
					s = 0;
			}
			if (s && !*(ne + p))
				return ((char *)(stack + ln));
		}
	}
	return (NULL);
}
