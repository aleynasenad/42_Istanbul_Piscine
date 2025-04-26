/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldurmaz <aldurmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:02:17 by aldurmaz          #+#    #+#             */
/*   Updated: 2024/07/10 03:47:10 by aldurmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char a)
{
	char	*arr;

	if (a != '\0')
	{
		arr = "0123456789abcdef";
		ft_putchar('\\');
		ft_putchar(arr[a / 16]);
		ft_putchar(arr[a % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 32 || str[i] > 126 || str[i] == 9))
		{
			ft_putchar(str[i]);
		}
		else
		{
			hex(str[i]);
		}
		i++;
	}
}
