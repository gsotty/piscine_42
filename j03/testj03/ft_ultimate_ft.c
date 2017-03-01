/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 17:00:46 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/01 17:58:18 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_ft(int *********nbr)
{
	    *********nbr = 42;
}

int     ft_putchar(char c)
{
	        write(1, &c, 1);
			            return (0);
}

int     main(void)
{
	    int 	a;
		int 	*nbr0;
		int 	**nbr1;
		int 	***nbr2;
		int 	****nbr3;
		int 	*****nbr4;
		int 	******nbr5;
		int 	*******nbr6;
		int 	********nbr7;
		int 	*********nbr;

		a = 0;
		nbr0 = &a;
		nbr1 = &nbr0;
	   	nbr2 = &nbr1;
		nbr3 = &nbr2;
		nbr4 = &nbr3;
		nbr5 = &nbr4;
		nbr6 = &nbr5;
		nbr7 = &nbr6;
		nbr = &nbr7;
		ft_ft(nbr);
		ft_putchar (a);
}
