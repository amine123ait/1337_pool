// ascii to integer
#include <string.h>
int	ft_atoi(char *str)
{
	int i; 
	int result;
	int sign; 
	i = 0 ; 
	sign = 1; 
	result = 0 ;
	//escape space and tabs
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)){
		i++; 
	}
	// Check signes 
	if (str[i] == '-' || str[i] == '+'){
		if (str[i] == '-'){
			sign = sign * -1 ; 
		}
		i++;
	}
	// Check string number

	while (str[i] >= '0' && str[i] <= '9'){
		result = result * 10 + (str[i] - '0');
		i++;

	}

	return result * sign ;
}

int main(void)
{
	char *test = "  +24";
	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
	
}