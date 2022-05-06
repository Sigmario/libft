/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:14:17 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/06 13:47:52 by julmuntz         ###   ########.fr       */
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

int	main(int arc, char **arv)
{
	int	digit;

	if (arc == 2)
	{
		digit = arv[1][0];
		printf("%d\n", ft_isdigit(digit));
	}
}

*/
