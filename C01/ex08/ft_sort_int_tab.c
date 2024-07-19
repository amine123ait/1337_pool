void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	swap;

	i = 0;
	j = i + 1;
	while (j < size)
	{
		if (tab[i] > tab[j])
		{
			swap = tab[i];
			tab[i] = tab[j];
			tab[j] = swap;
			i = 0;
			j = i + 1;
		}
		else
		{
			j++;
			i++;
		}
	}
}
