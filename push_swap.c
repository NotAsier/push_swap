/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:37:21 by aarranz-          #+#    #+#             */
/*   Updated: 2023/11/28 13:13:09 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_arguments(int argc, char **argv, t_list **stack)
{
	int	i;
	int	k;
	char	**temp;
	t_list	*current;

	i = 0;
	current = *stack;
	while (++i < argc)
	{
		temp = ft_split(argv[i], ' ');
		k = 0;
		while (temp[k])
		{
			current->value = (ft_atoi(temp[k]));
			printf("%d ", current->value);
			free(temp[k++]);
			ft_lstadd_back(&current, ft_lstnew(0));
			current = current->next;
		}
		free(temp);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack;

	stack = (t_list *)malloc(sizeof(t_list));
	parse_arguments(argc, argv, &stack);
	
}
