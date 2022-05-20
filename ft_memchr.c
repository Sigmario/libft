/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memchr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/13 16:31:08 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/20 17:15:15 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	chr;
	char	*str;

	i = 0;
	chr = (char)c;
	str = (char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

/*

#include <stdio.h>
#include <string.h>
int	main (void)
{
	const char *str = "My name is Bond... James Bond";
	const char chr = 'B';
	char *ptr;

	puts("\n- memchr");
	ptr = memchr(str, chr, 007);
	printf("Begins at first %c.\nThe output is:  %s.\n", chr, ptr);
	
	puts("\n- ft_memchr");
	ptr = ft_memchr(str, chr, 007);
	printf("Begins at first %c.\nThe output is:  %s.\n", chr, ptr);
	
	return 0;
}

*/