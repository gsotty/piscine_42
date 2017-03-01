/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 23:16:44 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/14 09:48:08 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_clear(t_list **begin_list)
{
	t_list	list_supp;
	t_list	list;

	list = *begin_list
	if (begin_list == NULL)
		return (0);
	while (list->next != NULL)
	{
		list_supp = list->next;
		list->next = list_supp->next;
		free(list_supp);
		list_supp = NULL;
	}
	list_supp = list->next;
	list->next = list_supp->next;
	free(list_supp);
	list_supp = NULL;
	free(begin_list);
	begin_list = NULL;
}
