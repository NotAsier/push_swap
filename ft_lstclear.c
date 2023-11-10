/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:35:15 by aarranz-          #+#    #+#             */
/*   Updated: 2023/11/10 11:09:20 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*temp;

	if (lst && del)
	{
		node = *lst;
		while (node)
		{	
			temp = node->next;
			del(node->content);
			free(node);
			node = temp;
		}
	}
	*lst = NULL;
}
