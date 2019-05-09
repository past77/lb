/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 21:30:23 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/07 12:54:48 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c1;
	char			*b1;
	int				i;

	c1 = (unsigned char)c;
	b1 = b;
	i = 0;
	while (len > 0)
	{
		*b1 = c1;
		b1++;
		len--;
	}
	return (b);
}
