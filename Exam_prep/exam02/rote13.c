// a - m + 13 
// m - z - 13 ;
// using arguments
#include <unistd.h>
void ft(char c){
	write(1, &c,1);

}

int main(int argc, char **argv)
{	
	int i; 
	i = 0 ;
	if (argc == 2){
		while(argv[1][i] != '\0'){
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm' ) || (argv[1][i] >= 'A' && argv[1][i] <= 'M' )){
				argv[1][i] += 13 ; 
				ft(argv[1][i]);
			}
			else if ((argv[1][i] >= 'm' && argv[1][i] <= 'z' ) || (argv[1][i] >= 'M' && argv[1][i] <= 'Z' )){
				argv[1][i] -= 13 ; 
				ft(argv[1][i]);
				
			}
			else {
				ft(argv[1][i]);
			}
			i++;
		}


	}

	write(1, "\n",1);
	return 0;
}