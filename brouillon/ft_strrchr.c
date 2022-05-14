/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strrchr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 16:10:46 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/14 17:01:38 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *)s + i + 0);
		i--;
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

	puts ("\n- strrchr");
	ptr = strrchr(str, chr);
	printf("Begins at last %c.\nThe output is: %s\n", chr, ptr);
	
	puts ("\n- ft_strrchr");
	ptr = ft_strrchr(str, chr);
	printf("Begins at last %c.\nThe output is: %s\n", chr, ptr);
	
	return 0;
}

*/