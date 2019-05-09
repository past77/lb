/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_fn1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 16:08:33 by ppolozhe          #+#    #+#             */
/*   Updated: 2019/01/22 16:08:40 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_puchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(unsigned char *)(s1 + i) - (*(unsigned char *)(s2 + i)));
}
