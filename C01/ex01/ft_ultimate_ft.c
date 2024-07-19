#include <unistd.h>

void	ft_ultimate_ft(int ********nbr)
{
	********nbr = 42;
}
int main (){
	int c = 0; 
	int *d= &c ;
	int **e =&d ;
	int ***f= &e;
	int ****j= &f;
	int *****k= &j;
	int ******l= &k;
	int *******m = &l;
	int ********n = &m;
	printf("before calling the function %d \n", c);
	ft_ultimate_ft(n);
	printf("after calling the function %d \n", c);


}
