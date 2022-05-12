/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memmove.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/07 16:19:29 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 16:21:16 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*tmp;

	if (dest < src || src + n <= dest)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		s = src + n;
		tmp = dest + n;
		while (n--)
			*--tmp = *--s;
	}
	return (dest);
}

/*

#include<stdio.h>
#include<string.h>
int main(void)
{
	puts ("\n- memmove");
	char srcOG[100] = "HelloWorld";
	memmove(srcOG+5, srcOG, strlen(srcOG)+1);
	printf("%s\n", srcOG);
	
	puts ("\n- ft_memmove");
	char srcFT[100] = "HelloWorld";
	ft_memmove(srcFT+5, srcFT, strlen(srcFT)+1);
	printf("%s\n", srcFT);
	
	return 0;
}

*/