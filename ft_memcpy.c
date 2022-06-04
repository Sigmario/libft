/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/19 16:21:24 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	s = (void *)src;
	d = (void *)dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[100] = "Source File";
	char dst[100];

	puts("\n- memcpy");
	memcpy(dst, src, sizeof(src));
	printf("Srce: %s\n", src);
	printf("Dest: %s\n", dst);

	puts("\n- ft_memcpy");
	ft_memcpy(dst, src, sizeof(src));
	printf("Srce: %s\n", src);
	printf("Dest: %s\n", dst);

	return (0);
}

*/