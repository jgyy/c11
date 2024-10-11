/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:57:24 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/10 22:16:18 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	ascending;
	int	descending;
	int	i;

	ascending = 1;
	descending = 1;
	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			ascending = 0;
			break ;
		}
	}
	i = -1;
	while (++i < length -1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			descending = 0;
			break ;
		}
	}
	return (ascending || descending);
}
