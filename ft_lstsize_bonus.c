/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:00:27 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 04:36:05 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstsize() fun, counts the number of elememts in the l-l.
 * returns the total count of elements in the list.
*/

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst -> next;
	}
	return (counter);
}

/*
int main()
{
	t_list *lst = ft_lstnew("Hello");
	
	ft_lstadd_back(&lst, ft_lstnew("World"));
	
	int size = ft_lstsize(lst);
	printf("%d\n", size);

	t_list *empty_list = NULL;
	
	size = ft_lstsize(empty_list);
}
*/
