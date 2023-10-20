/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:31:31 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/11 22:11:02 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	while (i < size / 2)
	{
		rev = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = rev;
		i++;
	}
}
