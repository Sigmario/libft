/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:00:46 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/02 22:50:37 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		size;
	char	*str;
	int		sign;

	if (nbr == INT_MIN)
		return (ft_strdup("-2147483648"));
	size = ft_nbrlen(nbr);
	str = ft_calloc(size + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[size--] = 0;
	sign = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		sign++;
	}
	while (size >= 0 + sign)
	{
		str[size--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	char *var;
	if (arc == 2)
	{
		var = ft_itoa(ft_atoi(arv[1]));
		printf("%s\n", var);
		free(var);
	}
}

*/

/*

static char	*ft_intmin(int nbr)
{
	char	*str;

	str = ft_itoa(nbr + 1);
	str[10] = '8';
	return (str);
}

*/
