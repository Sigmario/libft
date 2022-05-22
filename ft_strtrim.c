/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strtrim.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/21 22:17:55 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/22 05:42:34 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	long int	start;
	long int	end;

	start = 0;
	if (str == NULL || set == NULL)
		return (NULL);
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str) - 1;
	while (ft_strchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end - start + 1));
}
