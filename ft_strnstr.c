/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strnstr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/16 13:59:37 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/17 15:00:29 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (*little == 0)
		return ((char *)big);
	if (*big == 0 && *little == 0)
		return ("");
	while (big[i] && i < len)
	{
		while (big[i + l] == little[l] && (i + l < len))
		{
			l++;
			if (little[l] == 0)
				return ((char *)big + i);
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