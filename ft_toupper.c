/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_toupper.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 11:04:04 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 17:45:05 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	char	lower;

	if (arc == 2)
	{
		lower = arv[1][0];
		
		puts("\n- toupper");
		printf("%d\n", toupper(lower));

		puts("\n- ft_toupper");
		printf("%d\n", ft_toupper(lower));
	}
}

*/