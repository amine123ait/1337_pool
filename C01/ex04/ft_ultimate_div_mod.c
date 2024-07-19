#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;
	int	div;
	int	modulo;

	c = *a;
	d = *b;
	div = c / d;
	modulo = c % d;
	*a = div;
	*b = modulo;
}
