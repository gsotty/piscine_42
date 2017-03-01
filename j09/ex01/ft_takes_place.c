/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 20:22:08 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/09 14:46:07 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour == 0 || hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", (hour % 12), ((hour % 12) + 1));
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	if (hour > 12 && hour <= 22)
		printf("%d.00 P.M. AND %d.00 P.M.\n", (hour % 12), ((hour % 12) + 1));
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
