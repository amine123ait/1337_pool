#include <stdlib.h>
#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

void	print_hex_values(unsigned char c)
{
	char	hex[16];

	hex[0] = '0';
	hex[1] = '1';
	hex[2] = '2';
	hex[3] = '3';
	hex[4] = '4';
	hex[5] = '5';
	hex[6] = '6';
	hex[7] = '7';
	hex[8] = '8';
	hex[9] = '9';
	hex[10] = 'a';
	hex[11] = 'b';
	hex[12] = 'c';
	hex[13] = 'd';
	hex[14] = 'e';
	hex[15] = 'f';
	ft('\\');
	ft(hex[c / 16]);
	ft(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft(str[i]);
		}
		else
		{
			print_hex_values(str[i]);
		}
		i++;
	}
}
