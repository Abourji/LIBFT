/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:02:16 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 04:34:06 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ft_lstadd_back() adds the element 'new' at the end of l-l 'lst'.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
 #include <stdio.h>
 int main()
 {
 	t_list *node = malloc(sizeof(t_list));
 	node -> content = "Hello";

	node -> next = NULL;
 	t_list *tmp;
 	tmp = node;
 	while(tmp != NULL)
 	{
 		printf("%s\n", tmp->content);
 		tmp = tmp -> next;
 	}

 	printf("=========\n");
 	t_list *new = malloc(sizeof(t_list));
 	new -> content = "World!";
 	new -> next = NULL;

 	ft_lstadd_back(&node,new);

 	tmp = node;
 	while(tmp != NULL)
 	{
 		printf("%s\n", tmp->content);
 		tmp = tmp -> next;
 	}
 }
*/
