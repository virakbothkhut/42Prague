/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:21:23 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/16 12:36:26 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int main (void)
// {
// 	char str[] = "Hey, you are gorgous !!!";
// 	int length = ft_strlen(str);

// 	printf("Here is the length: %d\n", length);
// 	printf("Here is the char: %s ", str);
// 	return (0);
// }