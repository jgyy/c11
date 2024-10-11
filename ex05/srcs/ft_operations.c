/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:04:14 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/14 22:04:58 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	ft_operations(t_operations ops)
{
	ops[0] = add;
	ops[1] = subtract;
	ops[2] = multiply;
	ops[3] = divide;
	ops[4] = modulo;
}
