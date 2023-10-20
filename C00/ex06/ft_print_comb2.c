/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:35:22 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/12 14:12:25 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int i, int j)

{
	char	a;
	char	b;

	a = '0' + i;
	b = '0' + j;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	check_conditions(int i, int j, int k, int l)

{
	if ((i * 10 + j) < (k * 10 + l))
	{
		print_numbers(i, j);
		write(1, " ", 1);
		print_numbers(k, l);
		if ((i * 10 + j) != 98)
		{
			write(1, ", ", 2);
		}
	}
}

void	iteration_func(int i, int j, int k, int l)

{
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				while (l <= 9)
				{
					check_conditions(i, j, k, l);
					l++;
				}
				k++;
				l = 0;
			}
			j++;
			k = 0;
			l = j + 1;
		}
		i++;
		j = 0;
	}
}

void	ft_print_comb2(void)

{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	iteration_func(i, j, k, l);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
