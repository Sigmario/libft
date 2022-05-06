/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:29:00 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/06 13:47:49 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n > 0)
	{
		*a = c;
		a++;
		n--;
	}
	return (s);
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char strOrigin[] = "HelloWorld";
	char strCustom[] = "HelloWorld";

	memset(strOrigin, '!', 3);
	memset(strOrigin + 7, '?', 2);
	printf("%s\n", strOrigin);

	ft_memset(strCustom, '!', 3);
	ft_memset(strCustom + 7, '?', 2);
	printf("%s\n", strCustom);
	
	return (0);
}

*/