/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:41:19 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/20 17:58:27 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		i = 0;
		while (i < power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}

// int	main(void)
// {
// 	int	base;
// 	int	power;
// 	int	result;

// 	base = 2;
// 	power = 3;
// 	result = ft_iterative_power(base, power);
// 	printf("%d", result);
// 	return (0);
// }
