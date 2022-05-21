/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strjoin.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/21 16:03:50 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/21 21:02:19 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i[3];
	char	*res;

	i[1] = ft_strlen(s1);
	i[2] = ft_strlen(s2);
	res = (char *)malloc(i[1] + i[2] + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, i[1]);
	ft_memcpy(res + i[1], s2, i[2]);
	res[i[1] + i[2]] = 0;
	return (res);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	char	*str;

	if (arc == 3)
	{
		puts("\n- ft_strjoin");
		str = ft_strjoin(arv[1], arv[2]);
		printf("%s\n", str);
		free(str);
		return (0);
	}
}

*/