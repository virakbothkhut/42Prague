/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:37:34 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/16 12:53:57 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
}

// int main()
// {
// 	char str[] = "Hey ! you are gorgeous <3";
// 	ft_putstr(str);
// 	printf("%s ", str);
// 	return (0);
// }
