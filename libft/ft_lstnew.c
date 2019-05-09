/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:29:03 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/09 15:24:11 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ln;

	if (!(ln = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		ln->content = NULL;
		content_size = 0;
	}
	else
	{
		if (!(ln->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(ln->content, content, content_size);
		ln->content_size = content_size;
	}
	ln->next = NULL;
	return (ln);
}
