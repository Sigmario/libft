/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlcpy.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/10 11:30:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/10 20:18:22 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	while (src[i[1]])
		i[1]++;
	if (size <= 0)
		return (i[1]);
	while (src[i[0]] && i[0] < size - 1)
	{
		dst[i[0]] = src[i[0]];
		i[0]++;
	}
	dst[i[0]] = 0;
	return (i[1]);
}

/*

#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char srcO[] = "Hello";
	char desO[14];
	printf("%lu\n", strlcpy(desO, srcO, 5));
	printf("%s\n", desO);

	char srcC[] = "Hello";
	char desC[14];
	printf("%lu\n", ft_strlcpy(desC, srcC, 5));
	printf("%s\n", desC);
}

*/