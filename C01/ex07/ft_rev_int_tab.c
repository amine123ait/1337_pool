void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swap;

	end = size - 1;
	start = 0;
	while (end >= size / 2)
	{
		swap = tab[end];
		tab[end] = tab[start];
		tab[start] = swap;
		end--;
		start++;
	}
}
