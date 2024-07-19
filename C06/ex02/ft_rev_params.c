/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:33:47 by testggman          #+#    #+#             */
/*   Updated: 2024/07/11 14:43:07 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft(char c)
{
	write(1 ,&c, 1);
}

int	main(int argc ,char  **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while(j > 0)
	{
		while(argv[j][i])
		{
			ft(argv[j][i]);
			i++;
		}
		ft('\n');
		i = 0;
		j--;
	}
}
