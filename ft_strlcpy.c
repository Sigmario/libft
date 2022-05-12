/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlcpy.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/10 11:30:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 15:34:40 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	while (src[i[1]])
		i[1]++;
	if (size <= 0)
		return (i[1]);
	while (src[i[0]] && i[0] < size - 1)
	{
		dst[i[0]] = src[i[0]];
		i[0]++;
	}
	dst[i[0]] = 0;
	return (i[1]);
}

/*

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	puts ("\n- strlcpy");
	char srcOG[] = "Hello";
	char dstOG[14];
	printf("%lu\n", strlcpy(dstOG, srcOG, 5));
	printf("%s\n", dstOG);

	puts ("\n- ft_strlcpy");
	char srcFT[] = "Hello";
	char dstFT[14];
	printf("%lu\n", ft_strlcpy(dstFT, srcFT, 5));
	printf("%s\n", dstFT);

	return 0;
}

*/