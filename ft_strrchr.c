/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strrchr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 16:10:46 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 17:20:19 by julmuntz     ########  ########+10       */
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
	puts ("\n- strrchr");
	const char strOG[] = "My name is Bond... James Bond."; 
	const char chrOG = 'B'; 
	char *ptrOG;
	ptrOG = strrchr(strOG, chrOG);
	printf("Begins at last %c.\nThe output is: %s\n", chrOG, ptrOG);
	
	puts ("\n- ft_strrchr");
	const char strFT[] = "My name is Bond... James Bond."; 
	const char chrFT = 'B'; 
	char *ptrFT;
	ptrFT = ft_strrchr(strFT, chrFT);
	printf("Begins at last %c.\nThe output is: %s\n", chrFT, ptrFT);
	
	return 0;
}

*/