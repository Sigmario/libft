/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:30:37 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/19 16:21:24 by julmuntz         ###   ########.fr       */
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
int	main(void)
{
	char src[100] = "Hello";
	char dst[100];

	puts("\n- strlcpy");
	printf("%lu\n", strlcpy(dst, src, 5));
	printf("%s\n", dst);

	puts("\n- ft_strlcpy");
	printf("%lu\n", ft_strlcpy(dst, src, 5));
	printf("%s\n", dst);

	return 0;
}

*/