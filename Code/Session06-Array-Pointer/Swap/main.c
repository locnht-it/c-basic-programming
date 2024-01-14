#include <stdio.h>
#include <stdlib.h>

//Viet ham hoan doi 2 value!!! a = 10, b = 100 -> 
//							   a = 100, b = 10

void swapV1(int a, int b);

int main(int argc, char *argv[]) {
	
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d; b = %d\n", a, b);
	swapV1(a, b);
	printf("In main(), after swapping, a = %d; b = %d\n", a, b);
	
	return 0;
}

//TRUYEN THAM TRI, DOI A B TRONG HAM, DAU CO DOI BEN MAIN()
void swapV1(int a, int b) {
	printf("Before swapping, a = %d; b = %d\n", a, b);
	int t;
	t = a; //bien trung gian luu lai gia tri cu truoc khi di voi nguoi moi!!!
	a = b;
	b = t; //b bang nguoi yeu cu
	printf("After swapping, a = %d; b = %d\n", a, b);
}
