/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_bzero.c                                       :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 12:17:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 16:20:20 by julmuntz     ########  ########+10       */
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
	int tabOG[] = {1,2,3,4,5,6,7,8,9};
	int tabFT[] = {1,2,3,4,5,6,7,8,9};

	puts ("\n- bzero");
	bzero(tabOG, 24);
	printf("%d%d%d%d%d%d%d%d%d\n",
    tabOG[0], tabOG[1], tabOG[2],
    tabOG[3], tabOG[4], tabOG[5],
    tabOG[6], tabOG[7], tabOG[8]);

	puts ("\n- ft_bzero");
	ft_bzero(tabFT, 24);
	printf("%d%d%d%d%d%d%d%d%d\n",
    tabFT[0], tabFT[1], tabFT[2],
    tabFT[3], tabFT[4], tabFT[5],
    tabFT[6], tabFT[7], tabFT[8]);

	return (0);
}

*/