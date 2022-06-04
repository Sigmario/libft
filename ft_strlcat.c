/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:46:16 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/20 17:12:00 by julmuntz         ###   ########.fr       */
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

#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char dst[100] = "Qwertyuiop";
	char src[100] = "Asdfghj";
	
	puts("\n- strlcat");
	printf("Size of Dest + Srce = %lu\n", strlcat(dst, src, 5));

	puts("\n- ft_strlcat");
	printf("Size of Dest + Srce = %lu\n", ft_strlcat(dst, src, 5));

	return 0;
}

*/