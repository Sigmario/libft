/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memset.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/13 19:43:39 by julmuntz     ########  ########+10       */
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
	return (s);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = {1,2,3,4,5,6,7,8,9};

	puts ("\n- memset");
	memset(str, 1, 6);
	printf("%d%d%d%d%d%d%d%d%d\n",
	str[0], str[1], str[2],
	str[3], str[4], str[5],
	str[6], str[7], str[8]);

	puts ("\n- ft_memset");
	ft_memset(str, 1, 6);
	printf("%d%d%d%d%d%d%d%d%d\n",
	str[0], str[1], str[2],
	str[3], str[4], str[5],
	str[6], str[7], str[8]);

	return (0);
}

*/