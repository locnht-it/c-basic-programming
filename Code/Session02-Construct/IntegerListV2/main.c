#include <stdio.h>
#include <stdlib.h>

//Viet app nho nho in ra cac so chan tu 1..100
//IPO
//I: ro, can so chan tu 1..100, vi du 2 4 6 8 10
//P: loi ra duoc so chan
//	 nho nhat 2, nhay cach 2, 4, 6, 8...

int main(int argc, char *argv[]) {

	printf("The list of even numbers from 1..100\n");
	//printf("2 4 6 8 10 12 14 16 18 20\n22 24 26 28 30...\n");
	//co the in dc, mien du thoi gian...
	//nhung no ko noi chinh xac su loc ra con so chan
	//so chan: chia het cho 2, chia 2 ko le mieng nao
	//		   chia 2 du 0!!! so du la 0 trong phep chia cho 2
	
	//int result = 5 % 3; //lay so du, ko lay thuong so
	//printf("5 mod 3 = %d\n", result);
		
	for (int i = 2; i <= 100; i += 2)
			printf("%d ", i);
	//bai nay ko cho 10, cho 6, vi ko mang ngu nghia so chan,
	printf("\n");
	
	for (int i = 1; i <= 100; i++)
		if (i % 2 == 0) //neu dung la i chia het cho 2
			printf("%d ", i); //thi in ra i nay
	
	printf("\n");
	
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
	
	
	
	return 0;
}
