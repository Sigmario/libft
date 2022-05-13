/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_memcmp.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/13 17:48:01 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/13 20:05:21 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (str1[i] != 0 && str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

/*

#include <stdio.h>
#include <string.h>
int	main(int arc, char *arv[])
{
	size_t	res;

	if (arc == 4)
	{
		res = memcmp(arv[1], arv[2], atoi(arv[3]));
		
		puts ("\n- memcmp");
		printf("%ld\n", res);

		puts ("\n- ft_memcmp");
		printf("%ld\n", res);
	}
}

*/