#include <unistd.h>
// ft_pitnbr(23) = 23 
void ft(char c){
	write(1, &c,1);
}
void ft_putnbr(int nb){
	if (nb ==  -2147483648){
		write(1, "-2147483648", 11); 
		return ;
		// dont forget to exit when it find the min nbr
	}

	if(nb < 0){
		ft('-');
		nb = -nb; 
	}
	if (nb > 9){
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);

	}
	else {
		ft(nb + '0');
	}

}

int main(){
	ft_putnbr(-10);
	ft('\n');
	ft_putnbr(1337);
	ft('\n');
	ft_putnbr(-2147483648);
	ft('\n');
	ft_putnbr(2147483647);
	ft('\n');
	ft_putnbr(0);
}