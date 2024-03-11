/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:32:08 by aarranz-          #+#    #+#             */
/*   Updated: 2024/03/11 02:45:12 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// normed
int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	init_stack(&a, argv);
	size = lst_size(a);
	if (!check_is_ranked(a))
		return (0);
	else if (size == 2)
		sa(&a, 1);
	else if (size == 3)
		sort_three(&a);
	else if (size == 4)
		sort_four(&a, &b);
	else if (size == 5)
		sort_five(&a, &b);
	else
		send_all(&a, &b);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
