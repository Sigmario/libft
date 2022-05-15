/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memchr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/13 16:31:08 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/13 19:01:02 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;

	i = 0;
	str = s;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*

#include <stdio.h>
#include <string.h>
int main (void)
{
	const char str[] = "My name is Bond... James Bond.";
	const char chr = 'B';
	char *ptr;

	puts ("\n- memchr");
	ptr = memchr(str, chr, 007);
	printf("Begins at first %c.\nThe output is:  %s\n", chr, ptr);
	
	puts ("\n- ft_memchr");
	ptr = ft_memchr(str, chr, 007);
	printf("Begins at first %c.\nThe output is:  %s\n", chr, ptr);
	
	return 0;
}

 */