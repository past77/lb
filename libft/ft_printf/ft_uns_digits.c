/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:35:59 by ppolozhe          #+#    #+#             */
/*   Updated: 2019/02/16 19:14:24 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t		do_unsign_nb(t_struc *form)
{
	uintmax_t	num;

	if (form->hh == 1)
		num = (unsigned char)va_arg(form->ap, unsigned int);
	else if (form->s_flag == 'U')
		num = va_arg(form->ap, unsigned long);
	else if (form->s_flag == 'O')
		num = va_arg(form->ap, long);
	else if (form->h == 1)
		num = (unsigned short)va_arg(form->ap, unsigned int);
	else if (form->ll == 1)
		num = va_arg(form->ap, unsigned long long);
	else if (form->l == 1)
		num = va_arg(form->ap, unsigned long);
	else if (form->j == 1)
		num = va_arg(form->ap, uintmax_t);
	else if (form->z == 1)
		num = va_arg(form->ap, size_t);
	else
		num = va_arg(form->ap, unsigned int);
	return (num);
}

void			*choose_signs(t_struc *form)
{
	int			j;
	char		flag;

	j = 0;
	flag = form->s_flag;
	if (form->press >= 0)
		fill_zero(form);
	if (form->hash == '#')
		fill_hash(form);
	if (flag != 'x' && flag != 'o' && flag != 'O' && flag != 'X' && flag != 'u')
		fill_width(form);
	else if (form->press == -1)
		fill_width(form);
	else
		fill_width_u(form, j);
	form->ret_nb += ft_strlen(form->help);
	write(1, form->help, ft_strlen(form->help));
	free(form->help);
	return (0);
}

t_struc			*excl(t_struc *form, uintmax_t val, int i)
{
	int p;

	p = form->press;
	if (val == 0 && form->hash == '#' && p > 0 && form->s_flag != 'p')
	{
		while (form->press != 1)
		{
			form->ret_nb += write(1, "0", 1);
			form->press--;
		}
	}
	if ((p == form->width || (p > i && val == 0)) && form->hash != '#')
	{
		ft_owidth_p(form, val);
		return (0);
	}
	if (val == 0 && form->s_flag != 'p')
	{
		form->help = ft_strdup("0");
		fill_width(form);
		form->ret_nb += ft_strlen(form->help);
		write(1, form->help, ft_strlen(form->help));
		return (0);
	}
	return (form);
}

t_struc			*parse_exclusion(t_struc *form, uintmax_t val)
{
	int i;

	i = (int)len_of_nbr(val);
	if (val == 0 && form->hash == '#' && form->s_flag == 'o' && !form->press)
	{
		form->ret_nb += write(1, "0", 1);
		return (0);
	}
	if (form->press == 0 && form->s_flag != 'p')
	{
		if (form->width > 0)
		{
			form->help = ft_strdup("");
			fill_width(form);
			form->ret_nb += ft_strlen(form->help);
			write(1, form->help, ft_strlen(form->help));
		}
		return (0);
	}
	if (excl(form, val, i) == NULL)
		return (0);
	else
		return (form);
}

t_struc			*ft_bases(t_struc *form, int base)
{
	uintmax_t	val;
	char		fl;
	int			w;
	int			p;

	fl = form->s_flag;
	w = form->width;
	p = form->press;
	val = do_unsign_nb(form);
	form->vl = val;
	if (w == p && p != 0 && (fl == 'x' || fl == 'X' || fl == 'u' || fl == 'o'))
	{
		form->help = ft_lit_base(val, base, form);
		choose_signs(form);
		return (form);
	}
	if (parse_exclusion(form, val) == NULL)
		return (0);
	form->help = ft_lit_base(val, base, form);
	choose_signs(form);
	return (form);
}
