/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_atoi.c                                        :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/17 17:01:44 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/18 20:08:37 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i[2];
	long	result;

	i[0] = 0;
	i[1] = 1;
	result = 0;
	while ((nptr[i[0]] == ' ') || (nptr[i[0]] >= '\t' && nptr[i[0]] <= '\r'))
		i[0]++;
	if (nptr[i[0]] == '-')
	{
		i[1] *= -1;
		i[0]++;
	}
	else if (nptr[i[0]] == '+')
		i[0]++;
	while (nptr[i[0]] >= '0' && nptr[i[0]] <= '9')
	{
		result = result * 10 + nptr[i[0]] - 48;
		if (result > 2147483647 && i[1] == 1)
			return (-1);
		else if (result > 2147483648 && i[1] == -1)
			return (0);
		i[0]++;
	}
	return (result * i[1]);
}

/*

#include <stdio.h>
int	main(int arc, char *arv[])
{
	int var;
	if (arc == 2)
	{
		var = atoi(arv[1]);
		printf("%d\n", var);

		var = ft_atoi(arv[1]);
		printf("%d\n", var);
	}
}

*/