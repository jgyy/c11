/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:02:52 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/14 22:02:53 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stddef.h>

typedef int	(*t_operations[5])(int, int);
typedef int	(*t_operation)(int, int);
void		ft_operations(t_operations ops);
void		ft_operators(char *ops);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
int			ft_atoi(char *str);
int			add(int a, int b);
int			subtract(int a, int b);
int			multiply(int a, int b);
int			divide(int a, int b);
int			modulo(int a, int b);
t_operation	get_operations(char operator);

#endif
