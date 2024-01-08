/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:02 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 15:24:56 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstclear() deletes & frees the memory
 * each element in the l-l 'lst' using the function 'del'.
 * finally, sets the list pointer to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while ((*lst) != NULL)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
		*lst = NULL;
	}
}

/*
void	ft_dd(void *data)
{
	free(data);
}

int main()
{
	t_list	*node = (t_list *)malloc(sizeof(t_list));
	node -> content = strdup("test");
	node -> next = NULL;
	ft_lstclear_bonus(node, ft_dd(data));
}
*/
