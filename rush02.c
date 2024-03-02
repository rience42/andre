/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenito <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:28:57 by bbenito           #+#    #+#             */
/*   Updated: 2024/03/02 12:29:05 by bbenito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b);

// Funcao para imprimir os cantos superiores (A e C)
void	cantos_superiores(int largura)
{
	int	j;

	ft_putchar('A');
	j = 1;
	while (j < largura - 1)
	{
		ft_putchar('B');
		j++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

// Funcao para imprimir os cantos laterais (B)
void	cantos_laterais(int compri)
{
	int	i;

	ft_putchar('B');
	i = 1;
	while (i < compri - 1)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cont;

	cont = 0;
	while (cont < y)
	{
		if (cont == 0 || cont == y - 1)
		{
			cantos_superiores(x);
		}
		else
		{
			cantos_laterais(x);
		}
		cont++;
	}
}
