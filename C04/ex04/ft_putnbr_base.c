/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhut <vkhut@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:27:47 by ayermeko          #+#    #+#             */
/*   Updated: 2023/09/17 20:34:43 by vkhut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(int n, int base_value, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar('-');
	}
	if (n_long >= base_value)
		ft_print_nbr(n_long / base_value, base_value, symbols);
	ft_putchar(symbols[n % base_value]);
}

int	ft_same_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (symbols[i])
	{
		j = i + 1;
		while (symbols[j])
		{
			if (symbols[i] == symbols[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		base_value++;
	}
	if (base_value < 2)
		return ;
	if (ft_same_char(base))
		return ;
	ft_print_nbr(nbr, base_value, base);
}


int main(void)
{
    int n = 4857;
    char baseSymbols[] = "0123";

    ft_putnbr_base(n, baseSymbols);
    return (0);
}
