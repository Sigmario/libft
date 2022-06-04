/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:26:51 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/19 17:43:40 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*

#include <stdio.h>
#include <ctype.h>
int	main(int arc, char **arv)
{
	puts("\n- isprint");
	printf("%d\n", isprint(126));

	puts("\n- ft_isprint");
	printf("%d\n", ft_isprint(126));
}

*/