/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memchr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/13 16:31:08 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/14 19:07:37 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char	*str;
	char *zero;

	i = 0;
	str = (void *)s;
	zero = "\0";
	while (str[i] && i < n - 1)
	{
		if (c == '\0')
			return (str + i);
		if (str[i] == c)
			return ((char *)s + i + 1);
		i++;
	}
	return (NULL);
}

///*

#include <stdio.h>
#include <string.h>
int main(void)
{
	const char str[] = "/|\x12\xff\x09\0k\x42\042\0\42|\\";
	// const char str[] = "My name is Bond... James Bond";
	const char chr = '\0';
	// const char chr = 'B';
	char *ptr;

	puts ("\n- memchr");
	ptr = memchr(str, chr, 12);
	// ptr = memchr(str, chr, 007);
	printf("Begins at first %c.\nThe output is:  %s.\n", chr, ptr);
	
	puts ("\n- ft_memchr");

	ptr = ft_memchr(str, chr, 12);
	// ptr = ft_memchr(str, chr, 007);
	printf("Begins at first %c.\nThe output is:  %s.\n", chr, ptr);
	
	return 0;
}

//*/