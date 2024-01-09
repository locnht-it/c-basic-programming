#include <stdio.h>
#include <stdlib.h>

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int n = 10; //le ra nen scanf(n), minh gan luon cho tien
	
	f(n);		//truyen thai y, truyen gia tri
	//in so nha cua n trong main()
	printf("In main, n addr is: %u\n", &n);
	return 0;
}

void f(int x) {
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	printf("In f(), x addr is: %u\n", &x);
}
