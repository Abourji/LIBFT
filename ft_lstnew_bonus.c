/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:29:20 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/27 23:43:59 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * THE LINKED LIST IS THE LINKED REPRESENTATION OF LIST.
 * ft_lstnew() fun, creates a new node for a l-l with the given content.
 * Returns a pointer to the newly created node or 
 * NULL if memory allocation fails. 
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>

int main()
{
	t_list	*node= ft_lstnew("test");
	printf("%s\n", node->content);
}
*/
