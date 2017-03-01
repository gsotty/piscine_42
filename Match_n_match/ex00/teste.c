/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 09:49:45 by gsotty            #+#    #+#             */
/*   Updated: 2016/09/12 23:14:16 by gsotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int		x;
	char	*j;

	x = 0;
	if (s2[0] == '*' && s2[1] == '\0')
		return (1);
	if (s1[0] != '\0' && s2[0] != '*' && s1[0] == s2[0])
		return (match(s1 + 1, s2 + 1));
	if (s2[0] == '*' && s1[0] != '\0')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (s2[0] == '*' && s2[1] == '*')
		return (match(s1, s2 + 1));
	if (s1[0] != s2[0] && s2[0] != '*')
		return (0);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	return (0);
}

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "*dwadj";
	s2 = "*j";
	printf("%d", match(s1, s2));
	printf("\n%s\n", s2);
	return (0);
}
