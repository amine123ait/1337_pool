#include <unistd.h>

char ft_putchar(char c){
	write(1,&c,1);

}

void rush(int x ,int y){
	// if one of them is null the other is cuz the row  
	if (x <=0 || y <=0){
		return ; 
	}
	// row function
	// first row function  
	print_row('/','*','\\', x);
	while(y>2){
		// middle row
		print_row('*', ' ' , '*',x);
		y--;
	}
	if (y == 2){	
		print_row('\\','*','/', x);
	}

}

void print_row(char first , char mid ,char last , int x){
	ft_putchar(first);
	while (x>2){
		ft_putchar(mid);
		x--;
	}
	if (x == 2){
		ft_putchar(last);
		ft_putchar('\n');
	}

}


int main (){
	rush(20,7);
}
