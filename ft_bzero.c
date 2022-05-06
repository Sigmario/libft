/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:17:37 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/06 13:47:41 by julmuntz         ###   ########.fr       */
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
	int strOrigin[] = {1,2,3,4,5,6,7,8,9};
	int strCustom[] = {1,2,3,4,5,6,7,8,9};

	bzero(strOrigin, 5);
	printf("%d%d%d%d%d%d%d%d%d\n",
    strOrigin[0], strOrigin[1], strOrigin[2],
    strOrigin[3], strOrigin[4], strOrigin[5],
    strOrigin[6], strOrigin[7], strOrigin[8]);

	ft_bzero(strCustom, 5);
	printf("%d%d%d%d%d%d%d%d%d\n",
    strCustom[0], strCustom[1], strCustom[2],
    strCustom[3], strCustom[4], strCustom[5],
    strCustom[6], strCustom[7], strCustom[8]);

	return (0);
}

*/