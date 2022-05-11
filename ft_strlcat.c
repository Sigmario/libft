/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlcat.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/10 12:46:16 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/11 11:33:52 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	while (dst[i[0]])
		i[0]++;
	while (src[i[1]] && i[0] < size -1)
		dst[i[0]++] = src[i[1]++];
	dst = 0;
	return (size += 1);
}

///*

#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char dstO[100] = "853X9W";
	char srcO[100] = "ZABC";
	printf("%lu\n", strlcat(dstO, srcO, 5));
	printf("%s\n", dstO);

	char dstC[100] = "853X9W";
	char srcC[100] = "ZABC";
	printf("%lu\n", ft_strlcat(dstC, srcC, 5));
	printf("%s\n", dstC);
}

//*/