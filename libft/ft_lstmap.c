/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:30:46 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/11 12:29:17 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *rtr;

	if (lst != NULL)
	{
		rtr = (t_list*)malloc(sizeof(f(lst)));
		if (rtr == NULL)
			return (NULL);
		rtr = f(lst);
		rtr->next = ft_lstmap(lst->next, f);
		return (rtr);
	}
	return (NULL);
}
