/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:44:58 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/15 21:50:49 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>	
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "ABC ABZ";
// 	str2 = "ABC AB";
// 	printf("%d\n", ft_strncmp(str1, str2, 6));
// 	printf("%d\n", ft_strncmp(str1, str2, 7));
// }
