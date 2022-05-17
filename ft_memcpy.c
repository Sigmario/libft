/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memcpy.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/17 15:14:10 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[100] = "Source File";
	char dst[100];

	puts ("\n- memcpy");
	memcpy(dst, src, sizeof(src));
	printf("Srce: %s\n", src);
	printf("Dest: %s\n", dst);

	puts ("\n- ft_memcpy");
	ft_memcpy(dst, src, sizeof(src));
	printf("Srce: %s\n", src);
	printf("Dest: %s\n", dst);

	return (0);
}

*/