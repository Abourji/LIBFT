/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:18:35 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 21:46:11 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstmap() applies the function 'f' to each element's,
 * content in the l-l'lst'.
 * Returns a new list or NULL if allocation fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	new_node = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			ft_lstclear(&head, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}

/*
void	ft_del(void	*c)
{
	free(c);
}

void	*ft_f(void *s)
{
	char *ptr = ft_strdup(s);
	int i = 0;
	while (ptr[i])
	{
		ptr[i] -=32; 
		i++;
	}
	return (ptr);
}

#include <stdio.h>
int main()
{
	t_list *old = NULL;
	ft_lstadd_back(&old,ft_lstnew(ft_strdup("hello")));
	ft_lstadd_back(&old,ft_lstnew(ft_strdup("bonjour")));
	ft_lstadd_back(&old,ft_lstnew(ft_strdup("bionosdias")));

	t_list *new = NULL;
	new = ft_lstmap(old, ft_f, ft_del);

	while (new)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
}
*/
