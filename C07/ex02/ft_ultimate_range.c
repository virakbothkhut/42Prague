/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:06:16 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/24 23:33:34 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)(malloc(sizeof(int) * size));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}

// int	main(void)
// {
// 	int *result;
// 	int min = 1;
// 	int max = 5;
// 	int size = ft_ultimate_range(&result, min, max);

// 	if (size >= 0)
// 	{
// 		printf("Result: ");
// 		int i = 0;
// 		while (i < size)
// 		{
// 			printf("%d", result[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(result);
// 	}
// 	else if (size == -1)
// 	{
// 		printf("Memory allocation failed. \n");
// 	}
// 	else
// 	{
// 		printf("Empty range. \n");
// 	}
// 	return (0);
// }