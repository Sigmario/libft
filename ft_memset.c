/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memset.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 16:21:19 by julmuntz     ########  ########+10       */
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
	char strOG[] = {1,2,3,4,5,6,7,8,9};
	char strFT[] = {1,2,3,4,5,6,7,8,9};

	puts ("\n- memset");
	memset(strOG, 1, 6);
	printf("%d%d%d%d%d%d%d%d%d\n",
	strOG[0], strOG[1], strOG[2],
	strOG[3], strOG[4], strOG[5],
	strOG[6], strOG[7], strOG[8]);

	puts ("\n- ft_memset");
	ft_memset(strFT, 1, 6);
	printf("%d%d%d%d%d%d%d%d%d\n",
	strFT[0], strFT[1], strFT[2],
	strFT[3], strFT[4], strFT[5],
	strFT[6], strFT[7], strFT[8]);

	return (0);
}

*/