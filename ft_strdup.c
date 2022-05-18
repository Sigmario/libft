/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strdup.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/18 12:46:26 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/18 15:23:49 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*t;

	d = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (d == NULL)
		return (NULL);
	t = d;
	while (*s)
		*t++ = *s++;
	*t = 0;
	return (d);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *src = "Hello";
	char *dst;
	
	puts ("\n- strdup");
	dst = strdup(src);
	printf("%s\n", dst);
	
	puts ("\n- ft_strdup");
	dst = ft_strdup(src);
	printf("%s\n", dst);

	return 0;
}

*/