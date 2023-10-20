/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:05:58 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/24 23:15:24 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)

{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int min = 1;
// 	int max = 6;
// 	int *result = ft_range(min, max);

// 	if (result != NULL)
// 	{
// 		printf("Result: ");
// 		int i = 0;
// 		while (i < max - min)
// 		{
// 			printf("%d", result[i]);
// 			i++;
// 		}

// 		printf("\n");
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Invalid input or memory allocation failed.\n");
// 	}

// 	return (0);
// }