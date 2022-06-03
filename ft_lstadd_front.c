/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_lstadd_front.c                                :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/06/03 16:39:32 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/06/03 18:33:56 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != *lst)
	new->next = *lst;
	*lst = new;
}

/*

#include <stdio.h>
int	main()
{
	t_list *st0 = ft_lstnew("James");
	t_list *st1 = ft_lstnew("Jonah");
	t_list *st2 = ft_lstnew("Jameson");
	t_list *st3 = ft_lstnew("Junior");
	
	ft_lstadd_front(&st0, st3);
	ft_lstadd_front(&st3, st1);
	ft_lstadd_front(&st1, st2);
	while (st1)
	{
		printf("%s. ", (char *)st1->content);
		st1 = st1->next;
	}
	printf("\n");
}

*/