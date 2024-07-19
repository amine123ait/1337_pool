#include <unistd.h>
void ft(char c){
  write(1, &c, 1);
}
int main(int ac, char **av){
  if(ac ==2){
    int i = 0;
    while(av[1][i]){
      if(av[1][i] == 'z' ){
        ft('a');
      }
      else if(av[1][i] == 'Z' ){
        ft('A');
      }
      else{
        av[1][i] += 1 ;
        ft(av[1][i]);
      }
      i++;
    }

  }
  ft('\n');

}
