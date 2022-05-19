/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_bzero.c                                       :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 12:17:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 16:21:24 by julmuntz     ########  ########+10       */
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
	int tab[] = {1,2,3,4,5,6,7,8,9};

	puts("\n- bzero");
	bzero(tab, 24);
	printf("%d%d%d%d%d%d%d%d%d\n",
    tab[0], tab[1], tab[2],
    tab[3], tab[4], tab[5],
    tab[6], tab[7], tab[8]);

	puts("\n- ft_bzero");
	ft_bzero(tab, 24);
	printf("%d%d%d%d%d%d%d%d%d\n",
    tab[0], tab[1], tab[2],
    tab[3], tab[4], tab[5],
    tab[6], tab[7], tab[8]);

	return (0);
}

*/