/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:40:36 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/20 18:29:17 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

// int	main(void)
// {
// 	int	n;

// 	n = 0;
// 	printf("Factorial of %d is %d", n, ft_recursive_factorial(n));
// 	return (0);
// }