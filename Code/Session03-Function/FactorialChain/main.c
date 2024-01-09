#include <stdio.h>
#include <stdlib.h>

//Viet app in ra tong cua day so sau
//1! + 2! + 3! + 4! + 5! 
//bai phuc tap, ta che nho ra, co su lap lai cua role tinhGiaiThua() - TACH HAM

int getFactorial(int n); //v4 - soai ca- reuse!!!

int main(int argc, char *argv[]) {
	
	//printf("0! = %d\n", getFactorial(0));
	printf("5! = %d\n", getFactorial(5));
	//getFactorial(5);
	
	//REUSE BAT DAU
	//tinh tong cua 1! + 2! + 3! + 4! + 5!
	//				1	 2	  6	   24	120
	//sum			  3
	//						9     33	153
	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	printf("Sum of factorial chain from 1! to 5! = %d\n", sum); //153
	
	return 0;
}

/*
int getFactorial(int n)
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1;
		
	for (int i = 2; i <= n; i++) //chua xet n < 0
	//{
		acc *= i;
		//return acc; //TOANG RETURN QUA SOM, TINH FOR XONG MOI RETURN
	//}	
	return acc;
}
*/

int getFactorial(int n)
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1;
		
	for (int i = 2; i <= n; i++) //chua xet n < 0
		acc *= i;
	
	printf("Print inside a function: %d! = %d\n", n, acc); //cau lenh in ket qua xu li trong ham co return
								  //la ko nen, vi anh huong reuse	
	return acc;
}
