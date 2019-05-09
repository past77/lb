/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 17:01:22 by ppolozhe          #+#    #+#             */
/*   Updated: 2019/01/22 17:01:23 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_struc	*choose_type(t_struc *form)
{
	if (form->s_flag == '%')
		pt_persent(form);
	else if (form->s_flag == 'c')
		pt_char(form);
	else if (form->s_flag == 'd' || form->s_flag == 'D' || form->s_flag == 'i')
		pt_digit(form);
	else if (form->s_flag == 's')
		pt_string(form);
	else if (form->s_flag == 'x' || form->s_flag == 'X')
		ft_bases(form, 16);
	else if (form->s_flag == 'o' || form->s_flag == 'O')
		ft_bases(form, 8);
	else if (form->s_flag == 'u' || form->s_flag == 'U')
		ft_bases(form, 10);
	else if (form->s_flag == 'b')
		ft_bases(form, 2);
	else if (form->s_flag == 'p')
	{
		form->l = 1;
		form->hash = '#';
		ft_bases(form, 16);
	}
	else if (form->s_flag == 'f')
		pr_float(form);
	return (form);
}
