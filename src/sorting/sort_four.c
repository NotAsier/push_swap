/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:37:34 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:43:11 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// normed
void	sort_four(t_stack **a, t_stack **b)
{
	push_smallest(a, b);
	sort_three(a);
	pa(a, b, 1);
}

void	push_smallest(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		rank;

	rank = (*a)->rank;
	tmp = *a;
	while (tmp)
	{
		if (tmp->rank <= rank)
			rank = tmp->rank;
		tmp = tmp->next;
	}
	while (*a)
	{
		if ((*a)->rank == rank)
		{
			pb(b, a, 1);
			return ;
		}
		ra(a, 1);
	}
}
