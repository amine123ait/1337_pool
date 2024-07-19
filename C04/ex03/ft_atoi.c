/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:43:18 by testggman          #+#    #+#             */
/*   Updated: 2024/07/08 20:43:20 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)){
		i++; 
	}
	while ( str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void) {
	char *test = " - 23";


	printf("ft_atoi = %d\n", ft_atoi(test));

	return (0);
}

