/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memmove.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/07 16:19:29 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/13 19:41:16 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (dest < src || src + n <= dest)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		s = src + n;
		d = dest + n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/*

#include<stdio.h>
#include<string.h>
int main(void)
{
	char src[100] = "HelloWorld";

	puts ("\n- memmove");
	memmove(src+5, src, strlen(src)+1);
	printf("%s\n", src);

	puts ("\n- ft_memmove");
	ft_memmove(src+5, src, strlen(src)+1);
	printf("%s\n", src);

	return 0;
}

*/