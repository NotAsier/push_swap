/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:07:35 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:42:21 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// normed
void	pb(t_stack **b, t_stack **a, int print)
{
	t_stack	*tmp;

	if (!a || !*a || !b)
		return ;
	tmp = *a;
	(*a) = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	if (print)
		write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b, int print)
{
	t_stack	*tmp;

	if (!b || !*b || !a)
		return ;
	tmp = *b;
	(*b) = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	if (print)
		write(1, "pa\n", 3);
}
