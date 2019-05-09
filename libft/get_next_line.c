/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:03:28 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/24 18:01:22 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/get_next_line.h"

static	void	ft_free(char *give, char *clear)
{
	clear = give;
	free(clear);
}

static	char	*ft_read_line(char *str, char **line)
{
	char	*space;
	char	*fresh;
	size_t	i;

	i = 0;
	fresh = NULL;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	*line = ft_strsub(str, 0, i);
	if ((ft_strchr(str, '\n')))
	{
		fresh = str;
		space = ft_strchr(str, '\n');
		space = space + 1;
		space = ft_strdup(space);
		free(str);
	}
	else
	{
		space = ft_strdup("");
		ft_free(str, fresh);
	}
	return (space);
}

int				get_next_line(const int fd, char **line)
{
	static char		*gstr[4863];
	char			buf[BUFF_SIZE + 1];
	int				s;
	char			*freesh;

	if (read(fd, buf, 0) < 0 || fd < 0 || !line || BUFF_SIZE < 0)
		return (-1);
	if (gstr[fd] == NULL)
		gstr[fd] = ft_strdup("");
	while (!(ft_strchr(gstr[fd], '\n')))
	{
		s = read(fd, buf, BUFF_SIZE);
		if (s == 0)
			break ;
		buf[s] = '\0';
		freesh = gstr[fd];
		gstr[fd] = ft_strjoin(gstr[fd], buf);
		free(freesh);
	}
	if (s == 0 && gstr[fd][0] == '\0')
		return (0);
	gstr[fd] = ft_read_line(gstr[fd], line);
	return (1);
}
