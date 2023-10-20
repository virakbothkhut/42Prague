/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:41:26 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/28 16:02:04 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!(dest))
	{
		return (NULL);
	}
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	stock = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = 0;
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcpy(av[i]);
		i++;
	}
	stock[ac].str = 0;
	return (stock);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	struct s_stock_str	*result;

// 	result = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (result == NULL)
// 	{
// 		printf("Error: Memory allocation failed.\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < argc - 1; i++)
// 	{
// 		printf("String[%d]:\n", i);
// 		printf("  size: %d\n", result[i].size);
// 		printf("  str: %s\n", result[i].str);
// 		printf("  copy: %s\n", result[i].copy);
// 	}
// 	for (int i = 0; i < argc - 1; i++)
// 	{
// 		free(result[i].copy);
// 	}
// 	free(result);
// 	return (0);
// }
