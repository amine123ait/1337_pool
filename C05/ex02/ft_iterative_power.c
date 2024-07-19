int	ft_iterative_power(int nb, int power)
{
	int	s;

	s = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		s = s * nb;
		power--;
	}
	return (s);
}
