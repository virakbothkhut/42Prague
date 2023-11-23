/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:52:01 by vkhut             #+#    #+#             */
/*   Updated: 2023/11/02 22:52:30 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print(int c)
{
	if ((c > 31) && (c < 127))
	{
		return (258);
	}
	return (0);
}

// int	main(void)
// {
// 	int value;

// 	printf("Enter an integer value: ");
// 	scanf("%d", &value);

// 	if (ft_print(value) == 258)
// 	{
// 		printf("%d represents a printable ASCII character.\n", value);
// 	}
// 	else
// 	{
// 		printf("%d does not represent a printable ASCII character.\n", value);
// 	}

// 	return (0);
// }