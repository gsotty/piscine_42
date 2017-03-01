/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 18:33:44 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/14 08:37:53 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		x;
	t_list	*list;

	x = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		x++;
	}
	return (x);
}
