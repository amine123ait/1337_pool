/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:23:34 by testggman          #+#    #+#             */
/*   Updated: 2024/07/18 01:23:41 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	len = max - min;
	tab = malloc(sizeof(int) * len);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!tab)
	{
		return (-1);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len);
}
