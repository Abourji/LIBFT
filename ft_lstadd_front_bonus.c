/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:59:29 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 17:11:08 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstadd_front() fun, adds the node 'new' at
 * the beginning of the linked list.
 * if 'lst' or 'new' is NULL, the operation is ignored.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
#include <stdio.h>
int main()
{
	t_list *node = ft_lstnew("test");
	t_list *new = ft_lstnew("NEW");

	t_list *lst = NULL;

	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, node);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/
