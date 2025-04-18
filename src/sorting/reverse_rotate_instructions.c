/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_instructions.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:05:22 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:42:34 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// normed
void	rra(t_stack **a, int print)
{
	t_stack	*b_lst;

	if (!a || !*a)
		return ;
	if (lst_size(*a) == 1)
		return ;
	b_lst = (*a);
	while (b_lst->next->next)
		b_lst = b_lst->next;
	b_lst->next->next = (*a);
	(*a) = b_lst->next;
	b_lst->next = NULL;
	if (print)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int print)
{
	t_stack	*b_lst;

	if (!b || !*b)
		return ;
	if (lst_size(*b) == 1)
		return ;
	b_lst = (*b);
	while (b_lst->next->next)
		b_lst = b_lst->next;
	b_lst->next->next = (*b);
	(*b) = b_lst->next;
	b_lst->next = NULL;
	if (print)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, int print)
{
	rra(a, 0);
	rrb(b, 0);
	if (print)
		write(1, "rrr\n", 4);
}
