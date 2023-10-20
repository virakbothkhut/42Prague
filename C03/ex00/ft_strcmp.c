/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:44:13 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/15 21:47:55 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
// int		ft_strcmp(char *s1, char *s2);

// int		main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "You are handsomes";
// 	str2 = "You are handsome";
// 	printf("%d\n", ft_strcmp(str1, str2));
// 	printf("%d\n", strcmp(str1, str2));
// }
