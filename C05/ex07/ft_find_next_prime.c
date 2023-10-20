/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:47:29 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/24 11:20:18 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	np;

	if (nb <= 1)
		return (2);
	np = nb;
	while (!ft_is_prime(np))
	{
		np++;
	}
	return (np);
}

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(4));
// 	return (0);
// }
