/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:14:17 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/02 22:21:05 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*

#include <stdio.h>
#include <ctype.h>
int	main(int arc, char **arv)
{
	int	digit;
	if (arc == 2)
	{
		digit = arv[1][0];

		puts("\n- isdigit");
		printf("%d\n", isdigit(digit));

		puts("\n- ft_isdigit");
		printf("%d\n", ft_isdigit(digit));
	}
}

*/
