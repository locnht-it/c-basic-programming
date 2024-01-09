#include <stdio.h>
#include <stdlib.h>

//Viet app in ra tong cua day so sau
//1! + 2! + 3! + 4! + 5! + ... + n!
//IPO
//I: ko co n sao biet tinh den may giai thua, biet can phai nhoi bao nhieu con oc
//P: da vua lam o V2
//O: tuy n may ket qua sum la may

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	int sum = 0, n;
	
	printf("Input an integer >= 2 to get the sum of a factorial chain: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)		
		sum += getFactorial(i); //n = 6; 873
	
	printf("Sum of factorial chain from 1! to %d! = %d\n", n, sum);
	
	return 0;
}

int getFactorial(int n)
{
	int acc = 1;
	if (n == 0 || n == 1)
		return 1;
	for (int i = 2; i <= n; i++)
		acc *= i;
	return acc;
}
