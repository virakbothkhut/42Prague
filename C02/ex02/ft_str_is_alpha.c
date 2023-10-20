/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:30:13 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/14 17:45:56 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)

{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// int main () 
// {
// 	int n;
// 	char *str  = "Hello12";
// 	n = ft_str_is_alpha(str);
// 	printf("%d\n", n);
// }
