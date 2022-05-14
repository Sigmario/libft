/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strnstr.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/14 12:13:44 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/14 17:06:22 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (big == NULL)
		return (NULL);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*

#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	const char *full = "My name is Bond... James Bond.";
	const char *part = "Bo";
	char *ptr;

	puts("\n- strnstr");
	ptr = strnstr(full, part, 007);
	printf("Begins at first %s.\nThe output is:  %s\n", part, ptr);

	puts("\n- ft_strnstr");
	ptr = ft_strnstr(full, part, 007);
	printf("Begins at first %s.\nThe output is:  %s\n", part, ptr);

	return (0);
}

*/