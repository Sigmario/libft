/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strncmp.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 17:26:26 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 17:42:30 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != 0 && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*

#include <stdio.h>
int	main(int arc, char *arv[])
{	
	int result;
	if (arc == 4)
	{
		result = ft_strncmp(arv[1], arv[2], atoi(arv[3]));
		printf("%d\n", result);
	}
}

*/