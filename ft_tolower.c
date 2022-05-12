/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_tolower.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 11:18:50 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 16:20:17 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	char	upper;

	if (arc == 2)
	{
		upper = arv[1][0];
		printf("%c\n", ft_tolower(upper));
	}
}

*/