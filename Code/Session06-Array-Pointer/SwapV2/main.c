#include <stdio.h>
#include <stdlib.h>

//Viet ham hoan doi 2 value!!! a = 10, b = 100 -> 
//							   a = 100, b = 10

//void swapV1(int a, int b); //may dua tao 2 con so
 
void swapV2(int* a, int* b); //may dua tao 2 dia chi
							 //cua 2 bien int me nao do o xa xa
							 //lat tao don nha ca 2 dua xa xa do
							 
int main(int argc, char *argv[]) {
	
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d; b = %d\n", a, b);
	swapV2(&a, &b);
	printf("In main(), after swapping, a = %d; b = %d\n", a, b);
	
	return 0;
}

void swapV2(int* a, int* b) {
	//*a la dua xa xa; *hari la vi tt o xa xa
	//*b la dua xa xa; 
	int t = *a; //lay value dua xa xa cat di
	*a = *b;    //lay value dua xa xa b nao do, cat vao xa xa a
	*b = t;
}

