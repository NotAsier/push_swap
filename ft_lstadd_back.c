/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:25:50 by aarranz-          #+#    #+#             */
/*   Updated: 2023/11/10 11:08:51 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

∫

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst && new)
	{
		node = ft_lstlast(*lst);
		if (node)
			node->next = new;
		else
			ft_lstadd_front(lst, new);
	}
}
