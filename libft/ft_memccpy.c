/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:27:53 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 12:17:02 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dst1;
	size_t			i;
	unsigned char	*s;

	i = 0;
	dst1 = dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		*(dst1 + i) = *(s + i);
		if (*(s + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
