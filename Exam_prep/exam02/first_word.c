// ./a.out "  arg1 asdsa" 
// output: arg1 
#include <unistd.h>
void ft(char c) {
	write(1, &c,1);
}

int main(int argc, char **argv)
{
	int i;  
	i = 0 ;
 
	if (argc == 2){
		
			while(argv[1][i] == ' ' ||  (argv[1][i] >= 9 && argv[1][i] <= 13) && argv[1][i] != '\0'){
				i++;
			}
			
			while (!(argv[1][i] == ' ' ||  (argv[1][i] >= 9 && argv[1][i] <= 13)) && argv[1][i] != '\0'){
				ft(argv[1][i]);
				i++;
		}
	}
	
	write(1, "\n",1);
	return 0;
}