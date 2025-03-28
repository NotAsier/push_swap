/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:32:25 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:43:44 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// normed
int	find_max(t_stack *a)
{
	int		max;
	t_stack	*tmp;

	tmp = a;
	max = 0;
	while (tmp)
	{
		if (tmp->rank == 0)
		{
			max = tmp->val;
			break ;
		}
		tmp = tmp->next;
	}
	tmp = a;
	while (tmp)
	{
		if (tmp->val > max && tmp->rank == 0)
			max = tmp->val;
		tmp = tmp->next;
	}
	return (max);
}

void	set_rank(t_stack *a)
{
	int		size;
	int		max;
	t_stack	*tmp;

	size = lst_size(a);
	while (size)
	{
		tmp = a;
		max = find_max(tmp);
		while (tmp)
		{
			if (tmp->val == max && tmp->rank == 0)
				tmp->rank = size--;
			tmp = tmp->next;
		}
	}
}

int	check_doubles(t_stack *head)
{
	t_stack	*tmp;
	t_stack	*current;

	tmp = head;
	current = head;
	while (current)
	{
		tmp = current->next;
		while (tmp)
		{
			if (tmp->val == current->val)
				return (1);
			tmp = tmp->next;
		}
		current = current->next;
	}
	return (0);
}
