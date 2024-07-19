#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft(i / 10 + 48);
			ft(i % 10 + 48);
			write(1, " ", 1);
			ft(j / 10 + 48);
			ft(j % 10 + 48);
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
