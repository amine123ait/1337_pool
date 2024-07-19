#include <unistd.h>

int		g_a;
int		g_b;
int		g_i;

void	ft(char c)
{
	write(1, &c, 1);
}

void	anotherone(void)
{
	ft(g_i + 48);
	ft(g_a + 48);
	ft(g_b + 48);
}

void	ft_print_comb(void)
{
	g_i = 0;
	while (g_i <= 7)
	{
		g_a = g_i + 1;
		while (g_a <= 8)
		{
			g_b = g_a + 1;
			while (g_b <= 9)
			{
				anotherone();
				if (g_i != 7 || g_a != 8 || g_b != 9)
				{
					write(1, ", ", 2);
				}
				g_b++;
			}
			g_a++;
		}
		g_i++;
	}
}
