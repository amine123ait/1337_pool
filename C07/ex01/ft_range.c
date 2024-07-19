/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 01:21:53 by testggman          #+#    #+#             */
/*   Updated: 2024/07/18 01:27:19 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	len;

	i = 0;
	len = (max - min);
	if (min >= max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * len);
	if (!array)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
