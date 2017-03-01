/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:45:21 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/15 15:38:10 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H
# define __FT_LIST_H

# include <stdlib.h>

typedef	struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

#endif
