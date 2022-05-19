/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strncmp.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 17:26:26 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 16:21:24 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (void *)s1;
	str2 = (void *)s2;
	if (n == 0)
		return (0);
	while (str1[i] && str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

/*

#include <stdio.h>
#include <string.h>
int	main(int arc, char **arv)
{	
	size_t res;
	
	if (arc == 4)
	{
		res = strncmp(arv[1], arv[2], atoi(arv[3]));
		
		puts("\n- strncmp");
		printf("%ld\n", res);

		puts("\n- ft_strncmp");
		printf("%ld\n", res);
	}
}

 */