#include <stdio.h>
#include <stdlib.h>

//tinh tong cua cac so tu 1..100
//IPO

int main(int argc, char *argv[]) {
	
	int sum = 0; //vip tong cong don phai bat dau to 0, hoac rac
	printf("This program will show/compute the sum of 100 first integers\n");
	
	for (int i = 1; i <= 100; i++)
		sum += i; //may den tao tiep chieu
	printf("The sum is (FOR): %d\n", sum);
	
	//tinh tong dung do-while
	sum = 0;
	int count = 1;
	do
	{
		sum += count;
		count++;
	} while (count <= 100);
	printf("The sum is (DO-WHILE): %d\n", sum);
	
	sum = 0;
	count = 1;
	while (count <= 100)
	{
		sum += count;
		count++;
	}
	printf("The sum is (WHILE): %d\n", sum);
	
	return 0;
}
