/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memset.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/11 19:31:37 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = c;
		a++;
		n--;
	}
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char strOrigin[] = {1,2,3,4,5,6,7,8,9};
	char strCustom[] = {1,2,3,4,5,6,7,8,9};

	memset(strOrigin, 1, 6);
	printf("%d%d%d%d%d%d%d%d%d\n",
    strOrigin[0], strOrigin[1], strOrigin[2],
    strOrigin[3], strOrigin[4], strOrigin[5],
    strOrigin[6], strOrigin[7], strOrigin[8]);

	ft_memset(strCustom, 1, 6);
	printf("%d%d%d%d%d%d%d%d%d\n",
    strCustom[0], strCustom[1], strCustom[2],
    strCustom[3], strCustom[4], strCustom[5],
    strCustom[6], strCustom[7], strCustom[8]);

	return (0);
}

*/