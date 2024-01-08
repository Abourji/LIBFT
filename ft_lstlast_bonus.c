/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:01:29 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 04:45:52 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstlast() returns a pointer to the last element of the l_l 'lst'.
*/

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*
int main()
{
	t_list	*list = ft_lstnew(strdup("Node"));
	ft_lstadd_back(&list, ft_lstnew(strdup("Node1")));
	ft_lstadd_back(&list, ft_lstnew(strdup("Node9")));

	t_list *last = ft_lstlast(list);
	if (last != NULL)
	{
		printf("Last element: %s\n", (char *)last->content);
	}
}
*/
