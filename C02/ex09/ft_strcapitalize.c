#include <unistd.h>

void	all_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void	uppercase_first(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i - 1;
		if ((i == 0) || (!((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A'
						&& str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9'))))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	all_lowercase(str);
	uppercase_first(str);
	return (str);
}
