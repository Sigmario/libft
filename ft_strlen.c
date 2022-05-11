/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlen.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/04 13:23:22 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/11 19:39:37 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%ld\n", strlen("test"));
	printf("%ld\n", ft_strlen("test"));
}

*/