/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_substr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/19 18:19:09 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/21 20:43:02 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	tmp;
	char			*dst;

	i = 0;
	tmp = start;
	if (i > SIZE_MAX / len - tmp)
		return (NULL);
	dst = malloc(ft_strlen(s) + 1 * len - tmp);
	if (dst == NULL)
		return (NULL);
	while (s[i] && i < len - tmp)
	{
		dst[i++] = s[start++];
		return (dst);
	}
	return (NULL);
}

/*

#include <stdio.h>
int	main(void)
{
	char *src = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	char *dst;
	int chr = 11;
	int len = 16;

	puts("\n- ft_substr");
	dst = ft_substr(src, chr, len);
	printf("%s\n", dst);

	return (0);
}

*/