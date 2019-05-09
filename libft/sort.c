/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:22:44 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/09 16:53:14 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sort(int *sort, int size)
{
	int i;
	int tmp;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size - 1)
	{
		if (sort[i] > sort[i + 1])
		{
			tmp = sort[i + 1];
			sort[i + 1] = sort[i];
			sort[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return (0);
}
