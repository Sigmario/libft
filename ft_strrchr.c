/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strrchr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 16:10:46 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/16 23:44:01 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = (char *)s;
	while (*s)
		s++;
	while (s != end && *s != (char)c)
		s--;
	if (*s == (char)c)
		return ((char *)s);
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

	puts ("\n- strrchr");
	ptr = strrchr(str, chr);
	printf("Begins at last %c.\nThe output is: %s.\n", chr, ptr);
	
	puts ("\n- ft_strrchr");
	ptr = ft_strrchr(str, chr);
	printf("Begins at last %c.\nThe output is: %s.\n", chr, ptr);
	
	return 0;
}

*/