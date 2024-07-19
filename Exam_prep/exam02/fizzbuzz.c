
// % 3 == 0 && % 5 == 0 ==> fizzbuzz
// % 3 == 0 ==> fizz
// % 5 == 0 ==> buzz
#include <stdio.h>
int main(){
	int i ;
	i = 1 ; 
	while(i < 100) {
		if (i % 3 == 0 && i % 5 == 0){
			printf("write(1,\"fizzbuzz\\n\", 9);\n");
		}
		else if (i % 3 == 0){
			printf("write(1,\"fizz\\n\", 5);\n");
		}
		else if (i % 5 == 0){
			printf("write(1,\"buzz\\n\", 5);\n");
		}
		else if (i < 10){
			printf("write(1,\"%d\\n\", 2);\n", i);

		}
		else {
			printf("write(1,\"%d\\n\", 3);\n", i);

		}
		i++;
	}

}