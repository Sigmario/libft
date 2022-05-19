/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_atoi.c                                        :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/17 17:01:44 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 13:20:19 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	int		i[2];
	long	result;

	i[0] = 0;
	i[1] = 1;
	result = 0;
	while ((str[i[0]] == ' ') || (str[i[0]] >= '\t' && str[i[0]] <= '\r'))
		i[0]++;
	if (str[i[0]] == '-')
	{
		i[1] *= -1;
		i[0]++;
	}
	else if (str[i[0]] == '+')
		i[0]++;
	while (str[i[0]] >= '0' && str[i[0]] <= '9')
	{
		result = result * 10 + str[i[0]] - 48;
		if ((unsigned long)result > LONG_MAX && i[1] == 1)
			return (-1);
		if ((unsigned long)result > LONG_MAX && i[1] == -1)
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
		puts ("\n- atoi");
		var = atoi(arv[1]);
		printf("%d\n", var);

		puts ("\n- ft_atoi");
		var = ft_atoi(arv[1]);
		printf("%d\n", var);

		perror("Error");
	}
}

*/