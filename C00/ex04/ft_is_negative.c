#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	d;

	c = 'P';
	d = 'N';
	if (n >= 0)
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, &d, 1);
	}
}
