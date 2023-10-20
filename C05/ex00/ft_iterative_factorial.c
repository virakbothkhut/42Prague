/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:39:56 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/20 18:01:55 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
	{
		return (0);
	}
	n = 1;
	while ((nb > 0))
	{
		n *= nb;
		nb--;
	}
	return (n);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(4));
// 	return (0);
// }
