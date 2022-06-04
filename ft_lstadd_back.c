/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:26:39 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/03 19:07:30 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (*lst == NULL)
		*lst = new;
	else
	{
		end = *lst;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
}

/*

#include <stdio.h>
int	main()
{
	t_list *st0 = ft_lstnew("James");
	t_list *st1 = ft_lstnew("Jonah");
	t_list *st2 = ft_lstnew("Jameson");
	t_list *st3 = ft_lstnew("Junior");
	
	ft_lstadd_back(&st0, st3);
	ft_lstadd_back(&st3, st2);
	ft_lstadd_back(&st2, st1);
	while (st0)
	{
		printf("%s. ", (char *)st0->content);
		st0 = st0->next;
	}
	printf("\n");
}

*/