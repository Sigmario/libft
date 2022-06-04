/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:27:29 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/30 15:09:44 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == 0)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "My name is Bond... James Bond"; 
	const char chr = 'B'; 
	char *ptr;

	puts("\n- strchr");
	ptr = strchr(str, chr);
	printf("Begins at first %c.\nThe output is:  %s.\n", chr, ptr);

	puts("\n- ft_strchr");
	ptr = ft_strchr(str, chr);
	printf("Begins at first %c.\nThe output is:  %s.\n", chr, ptr);

	return 0;
}

*/