/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_bzero.c                                       :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 12:17:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/11 19:34:01 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = 0;
		a++;
		n--;
	}
}

/*

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int tabOrigin[] = {1,2,3,4,5,6,7,8,9};
	int tabCustom[] = {1,2,3,4,5,6,7,8,9};

	bzero(tabOrigin, 24);
	printf("%d%d%d%d%d%d%d%d%d\n",
    tabOrigin[0], tabOrigin[1], tabOrigin[2],
    tabOrigin[3], tabOrigin[4], tabOrigin[5],
    tabOrigin[6], tabOrigin[7], tabOrigin[8]);

	ft_bzero(tabCustom, 24);
	printf("%d%d%d%d%d%d%d%d%d\n",
    tabCustom[0], tabCustom[1], tabCustom[2],
    tabCustom[3], tabCustom[4], tabCustom[5],
    tabCustom[6], tabCustom[7], tabCustom[8]);

	return (0);
}

*/