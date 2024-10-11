/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:05:24 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/14 22:05:26 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	main(int argc, char **argv)
{
	int			result;
	t_operation	operation;
	char		operator;

	if (argc == 4)
	{
		operator = argv[2][0];
		operation = get_operations(operator);
		if (operation)
		{
			result = operation(ft_atoi(argv[1]), ft_atoi(argv[3]));
			if (!((operator == '/' || operator == '%')
					&& ft_atoi(argv[3]) == 0))
			{
				ft_putnbr(result);
				write(1, "\n", 1);
			}
		}
		else
		{
			ft_putnbr(0);
			write(1, "\n", 1);
		}
	}
	return (0);
}
