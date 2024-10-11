/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:05:12 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/14 22:05:14 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

t_operation	get_operations(char operator)
{
	t_operations	operations;
	char			operators[5];
	int				i;

	ft_operations(operations);
	ft_operators(operators);
	i = 0;
	while (i < 5)
	{
		if (operator == operators[i])
			return (operations[i]);
		i++;
	}
	return (NULL);
}
