/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fills.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:41:40 by ppolozhe          #+#    #+#             */
/*   Updated: 2019/01/26 15:39:49 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			fill_hash(t_struc *form)
{
	char		*buf;
	static char	*hash = NULL;
	int			hs;
	int			lhs;

	hs = (form->s_flag == 'x' || form->s_flag == 'p') ? 1 : 0;
	lhs = (form->s_flag == 'X') ? 1 : 0;
	if (form->s_flag == 'x' || form->s_flag == 'o' || form->s_flag == 'p')
		hash = hs ? ft_strdup("0x") : ft_strdup("0");
	else if (form->s_flag == 'X')
		hash = lhs ? ft_strdup("0X") : ft_strdup("0");
	if (form->zero == '0')
	{
		form->width -= (hs == 1 || lhs == 1) ? 2 : 1;
		fill_width(form);
	}
	if (ft_strncmp(form->help, "0", 1) || (form->s_flag != 'o'))
	{
		if (form->press == 0 && form->s_flag == 'p' && form->vl == 0)
			form->help = ft_strdup("");
		buf = form->help;
		form->help = ft_strjoin(hash, buf);
		free(buf);
	}
	free(hash);
}

void			fill_zero(t_struc *form)
{
	int			i;
	int			presicion;
	char		*buff;
	char		*part;

	i = 0;
	presicion = form->press;
	if (presicion <= (int)ft_strlen(form->help))
		return ;
	buff = (char*)ft_memalloc(presicion - (int)ft_strlen(form->help) + 1);
	while (i < presicion - (int)ft_strlen(form->help))
	{
		buff[i] = '0';
		i++;
	}
	part = form->help;
	form->help = ft_strjoin(buff, part);
	free(buff);
	free(part);
}

void			fill_width(t_struc *form)
{
	int			i;
	int			j;
	char		*fa;
	char		*sol;

	i = form->width;
	if ((int)ft_strlen(form->help) > i)
		return ;
	j = 0;
	fa = form->help;
	sol = (char*)ft_memalloc(i - (int)ft_strlen(form->help) + 1);
	while (j < i - (int)ft_strlen(form->help))
		sol[j++] = (form->zero == '0' ? '0' : ' ');
	sol[j] = '\0';
	if (form->minus == '-')
	{
		if (form->zero == '0')
			sol = ignore_zero(form, i);
		form->help = ft_strjoin(fa, sol);
	}
	else
		form->help = ft_strjoin(sol, fa);
	free(sol);
	free(fa);
}

void			fill_width_u(t_struc *form, int j)
{
	int			i;
	char		*fa;
	char		*sol;

	i = form->width;
	if ((int)ft_strlen(form->help) > i)
		return ;
	fa = form->help;
	sol = (char*)ft_memalloc(i - (int)ft_strlen(form->help) + 1);
	while (j < i - (int)ft_strlen(form->help))
		sol[j++] = (form->zero == '0' ? ' ' : ' ');
	sol[j] = '\0';
	if (form->minus == '-')
	{
		if (form->zero == '0')
			sol = ignore_zero(form, i);
		form->help = ft_strjoin(fa, sol);
	}
	else
		form->help = ft_strjoin(sol, fa);
	free(sol);
	free(fa);
}

char			*ignore_zero(t_struc *form, int d)
{
	char		*sol;
	int			mi;
	int			end;

	end = d - (int)ft_strlen(form->help);
	mi = 0;
	sol = (char*)ft_memalloc(end + 1);
	while (mi < end)
		sol[mi++] = ' ';
	sol[mi] = '\0';
	return (sol);
}
