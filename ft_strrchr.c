/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strrchr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 16:10:46 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/13 20:03:18 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] != (char)c)
		i--;
	return ((char *)s + i);
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
	printf("Begins at last %c.\nThe output is: %s\n", chr, ptr);
	
	puts ("\n- ft_strrchr");
	ptr = ft_strrchr(str, chr);
	printf("Begins at last %c.\nThe output is: %s\n", chr, ptr);
	
	return 0;
}

*/