#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write(1, "zxwvuitsrqlkjiponmhgfedcba", 26);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
