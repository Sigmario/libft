/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_substr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/19 18:19:09 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 19:12:25 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
	int i;
	char sub;

	i = 0;
	sub = malloc(ft_strlen(str) + 1 * len);
	if (sub == NULL)
		return (NULL);
	while(i <= start)
	{
		if (i == start)
		{
			
		}
		i++
	}
}