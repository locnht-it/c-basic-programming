#include <stdio.h>
#include <stdlib.h>

//Viet app in ra tong cua day so sau
//1! + 2! + 3! + 4! + 5!

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	int sum = 0;
	
	for (int i = 1; i <= 5; i++)
		//sum = sum + i; //1 + 2 + 3 + 4 + 5
		//1 2 3 4 5 la dau vao ham giai thua, ham la gi ko quan tam
		//quan tam may tra ve cho tao x! x tao dua vao, i! khi tao dua i
		//tao cong don tren i!, eo cong i
		
		sum += getFactorial(i);
	
	printf("Sum of factorial chain from 1! to 5! = %d\n", sum);
	
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
