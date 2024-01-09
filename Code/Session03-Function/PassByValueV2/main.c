#include <stdio.h>
#include <stdlib.h>

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int x = 10; //le ra nen scanf(n), minh gan luon cho tien
	
	f(x);		//truyen thai y, truyen gia tri
	//in so nha cua x trong main()
	printf("In main, x = %d and x addr is: %u\n", x, &x);
	return 0;
}

void f(int x) {
	//ta thu thay doi value x cai coi, du truoc do la 10
	printf("In f() x = %d\n", x); //in x trong ham khi duoc do value
	x = 50;
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	//so nha cua x trong ham
	printf("Finally, in f(), x = %d and x addr is: %u\n", x, &x);
}
