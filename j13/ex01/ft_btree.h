/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 15:35:19 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/15 15:42:54 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BTREE_H
# define __FT_BTREE_H

# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_mode(void *item);

#endif
