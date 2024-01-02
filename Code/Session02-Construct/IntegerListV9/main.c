#include <stdio.h>
#include <stdlib.h>

//Tinh tong cua day so tu 1..n (n > 1)

//IPO
//I: ko dua n tinh the cho' nao duoc, n la 1 bien int
//P:
//O:

int main(int argc, char *argv[]) {
	
	int n, acc = 0;
	
	printf("This program will show the sum of n first integers (1..n)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n);
	//Co n roi do, tinh hoy
	
	for (int i = 1; i <= n; i++)
		acc += i;
	
	printf("This sum is %d\n", acc);
	
	return 0;
}
