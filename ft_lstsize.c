/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_lstsize.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/06/02 17:36:40 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/06/02 19:11:52 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	t_list *str;

	str = ft_lstnew("qwertyuiop");
	str->next = ft_lstnew("asdfghjkl");
	str->next->next = ft_lstnew("zxcvbnm");
	printf("%d\n", ft_lstsize(str));
}

*/