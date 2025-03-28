/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:04:17 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:42:46 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// normed
void	ra(t_stack **a, int print)
{
	t_stack	*tmp;

	if (!a || !*a)
		return ;
	if (lst_size(*a) == 1)
		return ;
	tmp = lst_last_node(*a);
	tmp->next = (*a);
	(*a) = (*a)->next;
	tmp->next->next = NULL;
	if (print)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int print)
{
	t_stack	*tmp;

	if (!b || !*b)
		return ;
	if (lst_size(*b) == 1)
		return ;
	tmp = lst_last_node(*b);
	tmp->next = (*b);
	(*b) = (*b)->next;
	tmp->next->next = NULL;
	if (print)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, int print)
{
	ra(a, 0);
	rb(b, 0);
	if (print)
		write(1, "rr\n", 3);
}
