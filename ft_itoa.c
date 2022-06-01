/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_itoa.c                                        :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/30 15:00:46 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/06/01 17:55:28 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_intmin(int nbr)
{
	char	*str;

	str = ft_itoa(nbr + 1);
	str[10] = '8';
	return (str);
}

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
	int		len;
	char	*str;
	int		signe;

	signe = 0;
	len = ft_nbrlen(nbr);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len--] = 0;
	if (nbr == INT_MIN)
		return (ft_intmin(nbr));
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		signe++;
	}
	while (len >= 0 + signe)
	{
		str[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (str);
}

/*

#include <stdio.h>
int	main(int arc, char *arv[])
{
	char *var;
	if (arc == 2)
	{
		var = ft_itoa(ft_atoi(arv[1]));
		printf("%s\n", var);
	}
}

*/