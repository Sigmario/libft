/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memcpy.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 15:17:02 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*s;
	unsigned char		*d;

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
	puts ("\n- memcpy");
	char srcOG[100] = "Source File";
	char dstOG[100];
	memcpy(dstOG, srcOG, sizeof(srcOG));
	printf("Srce: %s\n", srcOG);
	printf("Dest: %s\n", dstOG);
		
	puts ("\n- ft_memcpy");
	char srcFT[100] = "Source File";
	char dstFT[100];
	ft_memcpy(dstFT, srcFT, sizeof(srcFT));
	printf("Srce: %s\n", srcFT);
	printf("Dest: %s\n", dstFT);
	
	return (0);
}

*/