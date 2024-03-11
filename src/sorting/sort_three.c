/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:45:44 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:43:31 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// normed
void	sort_three(t_stack **a)
{
	if ((*a)->val > (*a)->next->val \
		&& (*a)->val < (*a)->next->next->val)
		sa(a, 1);
	else if ((*a)->val < (*a)->next->val \
			&& (*a)->val > (*a)->next->next->val)
		rra(a, 1);
	else if ((*a)->val < (*a)->next->val \
			&& (*a)->next->val > (*a)->next->next->val)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if ((*a)->val > (*a)->next->val \
			&& (*a)->next->val < (*a)->next->next->val)
		ra(a, 1);
	else if ((*a)->val > (*a)->next->val \
			&& (*a)->next->val > (*a)->next->next->val)
	{
		sa(a, 1);
		rra(a, 1);
	}
}
