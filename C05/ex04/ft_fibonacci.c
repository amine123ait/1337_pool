/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:18:06 by testggman          #+#    #+#             */
/*   Updated: 2024/07/14 17:19:46 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (index);
	}
	if (index <= 2)
	{
		return (1);
	}
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
