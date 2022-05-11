/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strlen.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/04 13:23:22 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/10 20:18:24 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%ld\n", ft_strlen("test"));
	printf("%ld\n", strlen("test"));
}

*/