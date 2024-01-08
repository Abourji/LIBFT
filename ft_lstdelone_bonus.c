/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:17:43 by adbourji          #+#    #+#             */
/*   Updated: 2023/11/30 03:14:10 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*
 void del_int_data(void *data) {
     free(data);
 }
 int main() {
     t_list *node = (t_list *)malloc(sizeof(t_list));
     node->content = strdup("test");
     node->next = NULL;
     ft_lstdelone(node, del_int_data);
     return 0;
}
*/
