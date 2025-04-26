/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msadikog <msadikog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:24:36 by msadikog          #+#    #+#             */
/*   Updated: 2024/07/07 12:06:30 by msadikog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	func(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (a == 1 && b == y))
		ft_putchar('A');
	else if ((a == x && b == 1) || (a == x && b == y))
		ft_putchar('C');
	else if ((a > 1 && a < x) && (b > 1 && b < y))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x > 0 && y > 0)
	{
		b = 1;
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				func(x, y, a, b);
				a++;
			}
			ft_putchar('\n');
			b++;
		}
	}
	else
		write(1, "hata", 4);
}
