/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_isalpha.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/03 10:49:53 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/10 20:18:32 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*

#include <stdio.h>

int	main(int arc, char **arv)
{
	int	alpha;

	if (arc == 2)
	{
		alpha = arv[1][0];
		printf("%d\n", ft_isalpha(alpha));
	}
}

*/
