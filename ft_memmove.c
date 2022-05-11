/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memmove.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/07 16:19:29 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/10 20:18:45 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*tmp;

	if (dest < src || src + n <= dest)
	{
		return (ft_memcpy(dest, src, n));
	}
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

int main()
{
   char srcOrigin[100] = "HelloWorld";
   memmove(srcOrigin+5, srcOrigin, strlen(srcOrigin)+1);
   printf("%s\n", srcOrigin);
   
   char srcCustom[100] = "HelloWorld";
   ft_memmove(srcCustom+5, srcCustom, strlen(srcCustom)+1);
   printf("%s\n", srcCustom);
   
   return 0;
}

*/