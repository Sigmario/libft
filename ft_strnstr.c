/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strnstr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/16 13:59:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/19 17:35:50 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *full, const char *part, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (*part == 0)
		return ((char *)full);
	if (*full == 0 && *part == 0)
		return ("");
	while (full[i] && i < len)
	{
		while (full[i + l] == part[l] && (i + l < len))
		{
			l++;
			if (part[l] == 0)
				return ((char *)full + i);
		}
		l = 0;
		i++;
	}
	return (NULL);
}

/*

#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	const char *full = "My name is Bond... James Bond";
	const char *part = "Bo";
	char *ptr;

	puts("\n- strnstr");
	ptr = strnstr(full, part, 007);
	printf("Begins at first %s.\nThe output is:  %s.\n", part, ptr);

	puts("\n- ft_strnstr");
	ptr = ft_strnstr(full, part, 007);
	printf("Begins at first %s.\nThe output is:  %s.\n", part, ptr);
	
	return (0);
}

*/