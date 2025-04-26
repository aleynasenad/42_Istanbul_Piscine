/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldurmaz <aldurmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:16:04 by aldurmaz          #+#    #+#             */
/*   Updated: 2024/07/17 03:58:58 by aldurmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i] != '\0')
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
