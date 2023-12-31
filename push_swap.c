/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:37:21 by aarranz-          #+#    #+#             */
/*   Updated: 2023/12/13 15:59:00 by aarranz-         ###   ########.fr       */
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
			current->value = ft_atoi(temp[k]);
			free(temp[k++]);
		}
		if (i + 1 != argc)
		{
			ft_lstadd_back(&current, ft_lstnew(0));
			current = current->next;			
		}
		free(temp);
	}
}


void print_count(t_list **stack)
{
	t_list	*current;

	current = *stack;
	while (current)
	{
		printf("%i\n",current->value);
		current = current->next;
	}
}

void swap(t_list **stack)
{
	t_list	*node_1;
	t_list	*node_2;

	node_1 = *stack;
	node_2 = node_1->next;

	node_1->next = node_2->next;
	node_2->next = node_1;
	*stack = node_2;
}

void push(t_list **stack_1, t_list **stack_2)
{
	t_list	*node_1;
	t_list 	*node_2;

	node_1 = *stack_1;
	node_2 = node_1->next;
	*stack_1 = node_2;
	*stack_2 = node_1;
	node_1->next = NULL;
}

void rotate(t_list **stack)
{
	t_list	*node_1;
	t_list 	*node_2;
	t_list	*node_3;
	t_list	*current;

	node_1 = *stack;
	node_2 = node_1->next;
	current = node_1;
	while (current->next)
		current = current->next;
	node_3 = current;
	node_3->next = node_1;
	node_1->next = NULL;
	*stack = node_2;
}

void reverse(t_list **stack)
{
	t_list	*node_1;
	t_list 	*node_2;
	t_list	*node_3;
	t_list	*current;

	node_1 = *stack;
	current = node_1;
	while (current->next->next)
		current = current->next;
	node_2 = current;
	node_3 = node_2->next;
	node_3->next = node_1;
	node_2->next = NULL;
	*stack = node_3;
}
 
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	//t_list	*stack_b;
	if (argc > 1)
	{
	stack_a = (t_list *)malloc(sizeof(t_list));
	//stack_b = (t_list *)malloc(sizeof(t_list));	
	parse_arguments(argc, argv, &stack_a);
	//swap(&stack_a);
	//push(&stack_a, &stack_b);
	reverse(&stack_a);
	print_count(&stack_a);
	//print_count(&stack_b);
	}
	return(0);
}
