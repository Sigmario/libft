/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlcat.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/10 12:46:16 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/11 18:49:01 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	const char	*p = s;

	while (maxlen-- > 0 && *p)
		p++;
	return (p - s);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strnlen(dst, size);
	if (len == size)
		return (len + ft_strlen(src));
	return (len + ft_strlcpy(dst + len, src, size - len));
}

/*

#include <bsd/string.h>
#include <stdio.h>

int	main()
{
	char dstO[100] = "853X9W7QLT";
	char srcO[100] = "ABCZXY";
	printf("%lu\n", strlcat(dstO, srcO, 5));
	printf("%s\n", dstO);

	char dstC[100] = "853X9W7QLT";
	char srcC[100] = "ABCZXY";
	printf("%lu\n", ft_strlcat(dstC, srcC, 5));
	printf("%s\n", dstC);
}

*/