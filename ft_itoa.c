/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_itoa.c                                        :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/30 15:00:46 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/31 19:07:53 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nbr)
{
	int len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	int		i;
	long	nb;
	int		len;
	char	*str;

	i = 0;
	nb = nbr;
	len = ft_nbrlen(nb);
	str = ft_calloc(len, sizeof(char *) + 1);
	if (str == NULL)
		return (NULL);
	str[len] = 0;
	len--;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + 48;
		nb /= 10;
	if ((unsigned long)nb > LONG_MAX && str[0] != '-')
		return ("-1");
	if ((unsigned long)nb > LONG_MAX && str[0] == '-')
		return ("0");
		len--;
	}
	return (str);
}

///*

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

//*/