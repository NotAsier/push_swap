/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:37:21 by aarranz-          #+#    #+#             */
/*   Updated: 2023/11/23 16:10:48 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_arguments(int argc, char **argv, t_list *stack)
{
	int	i;
	int	k;
	char	**temp;

	i = 0;
	t_list	*current = stack;
	while (++i < argc)
	{
		temp = ft_split(argv[i], ' ');
		k = 0;
		while (temp[k])
		{
			current->next = ft_lstnew(temp[k]);
			printf("%d", current->value);
			free(temp[k++]);
			current = current->next;
		}
		free(temp);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack;

	t_list	*stack = (t_list *)malloc(sizeof(t_list));
	parse_arguments(argc, argv,&stack);
}