/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:56:33 by vkhut             #+#    #+#             */
/*   Updated: 2023/09/18 17:29:58 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	char	*ft_print_program_name;
	int		i;

	if (argc > 0)
	{
		ft_print_program_name = argv[0];
		i = 0;
		while (ft_print_program_name[i] != '\0')
		{
			ft_putchar(ft_print_program_name[i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
