/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memmove.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/07 16:19:29 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 16:21:24 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (dst < src || src + n <= dst)
		return (ft_memcpy(dst, src, n));
	if (dst > src)
	{
		s = src + n;
		d = dst + n;
		while (n--)
			*--d = *--s;
	}
	return (dst);
}

/*

#include<stdio.h>
#include<string.h>
int main(void)
{
	char src[100] = "HelloWorld";

	puts("\n- memmove");
	memmove(src+5, src, strlen(src)+1);
	printf("%s\n", src);

	puts("\n- ft_memmove");
	ft_memmove(src+5, src, strlen(src)+1);
	printf("%s\n", src);

	return 0;
}

*/