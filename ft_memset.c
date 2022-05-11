/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memset.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/10 20:18:48 by julmuntz     ########  ########+10       */
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
	char srcOrigin[100] = "Fichier Source";
	char destOrigin[100];

	printf("____________________");
	puts("\n\nM E M C P Y :\n");
	memcpy(destOrigin, srcOrigin, sizeof(srcOrigin));
	printf("Srce: %s\n", srcOrigin);
	printf("Dest: %s\n", destOrigin);
	
	char srcCustom[100] = "Fichier Source";
	char destCustom[100];

	printf("____________________");
	puts("\n\nF T _ M E M C P Y :\n");
	ft_memcpy(destCustom, srcCustom, sizeof(srcCustom));
	printf("Srce: %s\n", srcCustom);
	printf("Dest: %s\n", destCustom);

	return (0);
}

*/