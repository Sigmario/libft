/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlcat.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/10 12:46:16 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 15:35:35 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *str, size_t maxlen)
{
	const char	*ptr = str;

	while (maxlen-- > 0 && *ptr)
		ptr++;
	return (ptr - str);
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

int	main(void)
{
	puts ("\n- strlcat");
	char dstOG[100] = "Qwertyuiop";
	char srcOG[100] = "Asdfghj";
	printf("Size of Dest + Srce = %lu\n", strlcat(dstOG, srcOG, 5));

	puts ("\n- ft_strlcat");
	char dstFT[100] = "Qwertyuiop";
	char srcFT[100] = "Asdfghj";
	printf("Size of Dest + Srce = %lu\n", ft_strlcat(dstFT, srcFT, 5));

	return 0;
}

*/