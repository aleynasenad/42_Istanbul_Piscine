/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldurmaz <aldurmaz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:25:27 by aldurmaz          #+#    #+#             */
/*   Updated: 2024/07/18 22:13:38 by aldurmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = 0;
	len = max - min;
	result = (int *)malloc(len * sizeof(int));
	if (!result)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	len = 0;
	while (min < max)
	{
		result[len] = min;
		min++;
		len++;
	}
	return (len);
}
