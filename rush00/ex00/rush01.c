/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testggman <testggman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:43:18 by testggman          #+#    #+#             */
/*   Updated: 2024/06/30 12:03:06 by testggman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
		{
			ft_putchar('/');
		}
		else if (a == x - 1)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		a++;
	}
}

void	last_row(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
		{
			ft_putchar('\\');
		}
		else if (a == x - 1)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		a++;
	}
}

void	mid_row(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0 || a == x - 1)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		a++;
	}
}

void	rush01(int x, int y)
{
	int	b;

	if (x < 1 || y < 1)
	{
		return ;
	}
	b = 0;
	while (b < y)
	{
		if (b == 0)
		{
			first_row(x);
		}
		else if (b == y - 1)
		{
			last_row(x);
		}
		else
		{
			mid_row(x);
		}
		ft_putchar('\n');
		b++;
	}
}
