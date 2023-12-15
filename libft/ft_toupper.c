/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:53:35 by vkhut             #+#    #+#             */
/*   Updated: 2023/11/22 04:26:03 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uppper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_uppper('a'));
// }