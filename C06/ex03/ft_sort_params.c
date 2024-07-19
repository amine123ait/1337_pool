#include <unistd.h>

void ft(char c){
	write(1, &c,1);
}
int ft_strcmp(char *s1 ,char *s2){
	int i ;
	i=0; 

	while(s1[i] == s2[i] && s1[i] != '\0'){
		i++;
	}
	return (s1[i] - s2[i]);


}

void ft_print_argument(int argc , char **argv){
	int i ;
	int j ;
	i= 1; 
	while(i < argc)
	{
		j=0; 
		while(argv[i][j]) {
			ft(argv[i][j]);
			j++;
		}
		i++;
		ft('\n');
	}
}

int main(int argc , char **argv){
	int i , j ;
	char *arg; 

	i = 1; 
	while (i < argc){
		j=i; 
		while (ft_strcmp(argv[j], argv[j -1]) < 0 && j > 1) {
			arg = argv[j -1]; 
			argv[j -1] = argv[j]; 
			argv[j] = arg; 
			j--;
		}
		i++; 
	}
	ft_print_argument(argc, argv); 
	return 0; 
}
