/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:29:36 by aarranz-          #+#    #+#             */
/*   Updated: 2023/11/10 11:10:17 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_node;
	t_list	*current_new_node;
	t_list	*newlist;
	void	*content;

	newlist = NULL;
	if (lst && f && del)
	{
		current_node = lst;
		while (current_node)
		{
			content = f(current_node -> content);
			current_new_node = ft_lstnew(content);
			if (!current_new_node)
			{
				free(content);
				ft_lstclear(&newlist, del);
				return (NULL);
			}
			ft_lstadd_back (&newlist, current_new_node);
			current_node = current_node -> next;
		}
	}
	return (newlist);
}
