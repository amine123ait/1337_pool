#include <stdio.h>

void mul_ptr(int *ptr , int number){
	*ptr = *ptr * number ;
	printf("%d\n", *ptr);
}

void min_ptr(int *ptr , int number){
	*ptr = *ptr - number ;
	printf("%d\n", *ptr);
}

void plus_ptr(int *ptr , int number){
	*ptr = *ptr + number ;
	printf("%d\n", *ptr);
}

void div_ptr(int *ptr , int number){
	*ptr = *ptr / number ;
	printf("%d\n", *ptr);
}

void modulo_ptr(int *ptr , int number){
	*ptr = *ptr % number ;
	printf("%d\n", *ptr);
}

int main(){
	int *ptr = 5;
	int number = 4;
	mul_ptr(&ptr , number);
	min_ptr(&ptr ,number);
	plus_ptr(&ptr , number);
	div_ptr(&ptr , number);
	modulo_ptr(&ptr , number);
}