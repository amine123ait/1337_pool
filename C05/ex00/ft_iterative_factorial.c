int	ft_iterative_factorial(int nb)
{
	int	s;
	int	i;

	s = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	i = nb;
	while (i > 1)
	{
		s = s * i;
		i--;
	}
	return (s);
}
