/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memchr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/13 16:31:08 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/13 17:47:15 by julmuntz     ########  ########+10       */
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
	puts ("\n- memchr");
	const char strOG[] = "My name is Bond... James Bond."; 
	const char chrOG = 'B'; 
	char *ptrOG;
	ptrOG = memchr(strOG, chrOG, 007);
	printf("Begins at first %c.\nThe output is:  %s\n", chrOG, ptrOG);
	
	puts ("\n- ft_memchr");
	const char strFT[] = "My name is Bond... James Bond."; 
	const char chrFT = 'B'; 
	char *ptrFT;
	ptrFT = ft_memchr(strFT, chrFT, 007);
	printf("Begins at first %c.\nThe output is:  %s\n", chrFT, ptrFT);
	
	return 0;
}

*/