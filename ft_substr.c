/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_substr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/19 18:19:09 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/06/02 13:16:20 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] && i < len)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}

/*

#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*dst;
	int		chr;
	int		len;

	src = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	chr = 11;
	len = 16;
	puts("\n- ft_substr");
	dst = ft_substr(src, chr, len);
	printf("%s\n", dst);
	return (0);
}

*/