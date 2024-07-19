// ./a.out "abc"
// a   b   c$ 
#include <unistd.h>
void ft(char c){
	write(1, &c ,1); 
}

int main(int argc, char **argv)
{ 
	if (argc == 2)
	{
		int i;
		i = 0;
		while (argv[1][i] != '\0')
		{
			ft(argv[1][i]);
			
			i++;
			if (argv[1][i] != '\0'){
				write(1, "   ", 3);
			}
		}
	}
	write(1, "\n",1);
	return 0;
}