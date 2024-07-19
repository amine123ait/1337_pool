#include <unistd.h>

int str_len(char *str){
	int i ;
	i = 0; 
	while(str[i]){
		i++; 
	}
	i--;
	return i; 
}

char rev_print(char *str){
	int i ; 
	i = str_len(str);
	while(i >= 0)
	{
		write(1,&str[i--],1);
	}
	// reverse string ?? 
	return str[i];
}

int main (){
	rev_print("abcd a");
	write(1 , "\n",1);
}