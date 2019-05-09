/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 11:50:23 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/11 14:15:46 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *srcc;
	char *dstc;

	srcc = (char*)src;
	dstc = (char*)dest;
	if (srcc < dstc)
	{
		srcc = srcc + len - 1;
		dstc = dstc + len - 1;
		while (len > 0)
		{
			*dstc-- = *srcc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*dstc++ = *srcc++;
			len--;
		}
	}
	return (dest);
}
