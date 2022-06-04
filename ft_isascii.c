/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:15:53 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/02 22:21:07 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*

#include <stdio.h>
#include <ctype.h>
int	main(int arc, char **arv)
{
	int	ascii;
	if (arc == 2)
	{
		ascii = arv[1][0];

		puts("\n- isascii");
		printf("%d\n", isascii(ascii));

		puts("\n- ft_isascii");
		printf("%d\n", ft_isascii(ascii));
	}
}

*/
