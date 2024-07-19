/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:42:32 by testggman          #+#    #+#             */
/*   Updated: 2024/07/11 14:27:33 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft(char c)
{
	write(1 ,&c, 1);
}

int	main (int argc ,char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while(j < argc)
	{
		while(argv[j][i])
 		{
			ft(argv[j][i]);
			i++;
		}
		i = 0;
		ft('\n');
		j++;
	}
}
