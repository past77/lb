/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_fn0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 20:00:18 by ppolozhe          #+#    #+#             */
/*   Updated: 2019/02/12 20:00:20 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		llen_of_nbr(long n)
{
	int		len;
	long	tmp;

	len = 0;
	tmp = n;
	while (tmp)
	{
		len++;
		tmp /= 10;
	}
	if (n < 0)
		len++;
	return (len);
}

size_t				len_nbr(intmax_t nb)
{
	size_t i;

	i = 1;
	while (nb /= 10)
		i++;
	return (i);
}

int		ft_puchar(char c)
{
	write(1, &c, 1);
	return (1);
}

char			*ft_ltoa(long n)
{
	long	tmp;
	int		len;
	char	*str;

	tmp = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == LONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	len = llen_of_nbr(tmp);
	if (tmp < 0)
		tmp = -tmp;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	while (tmp)
	{
		str[--len] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
char		*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = ft_strlen(src);
	if (!(str = ft_strnew(i)))
		return (NULL);
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}


int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	if (!n || (!s1 && !s2))
		return (0);
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (int)n)
		i++;
	if (i == (int)n)
		return (s3[i - 1] - s4[i - 1]);
	return (s3[i] - s4[i]);
}


char			*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	new_n;

	len = len_nbr(n);
	new_n = n;
	if (n < 0)
	{
		new_n = -n;
		len++;
	}
	if (!(str = ft_memalloc(len + 1)))
		return (NULL);
	str[--len] = new_n % 10 + '0';
	while (new_n /= 10)
		str[--len] = new_n % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
*/
