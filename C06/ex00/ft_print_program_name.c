/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:10:43 by testggman          #+#    #+#             */
/*   Updated: 2024/07/11 12:28:52 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft(char c)
{
	write(1 ,&c, 1);
}
int	main (int argc , char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		while(argv[0][i])
		{
			ft(argv[0][i]);
			i++;
		}
		ft('\n');
	}
}
