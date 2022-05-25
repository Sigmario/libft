/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_split.c                                       :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/23 13:56:31 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/25 17:37:11 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok_r(char *s, const char c, char **end)
{
	char	*res;

	if (s == NULL)
		s = *end;
	while (*s && ft_strchr(&c, *s))
		++s;
	if (*s == '\0')
		return (NULL);
	res = s;
	while (*s && !ft_strchr(&c, *s))
		++s;
	if (*s)
		*s++ = '\0';
	*end = s;
	return (res);
}

char	*ft_strtok(char *s, const char c)
{
	static char	*last;

	return (ft_strtok_r(s, c, &last));
}

char	**ft_split(char *s, char const c)
{
    char *t; 
	t = (char *)malloc(ft_strtok(s, c));
    while (t != NULL)
	    t = ft_strtok(NULL, c);
    return (t);
}

///*

#include <stdio.h>
int main()
{
    char *str = "Geeks-for-Geeks";
    char chr = '-';
    char *token;
	token = *ft_split(str, chr);
	printf("%s\n", token);
    return 0;
}

//*/