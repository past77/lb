/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:58:23 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/11 12:24:34 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*old;

	if (!alst)
		return ;
	while (*alst)
	{
		old = ((*alst)->next);
		ft_lstdelone(alst, del);
		*alst = old;
	}
	*alst = NULL;
}
