#include <stdio.h>
#include <stdlib.h>

//In ra cac so le tu 1..1000
//IPO:
//I:

//P: loi ra duoc so le, trong tap tu 1..1000
//	 le: chia 2 du 1, chu ko choi tro 1 3 5 7 9 11 13...

//O: le thi in ra

int main(int argc, char *argv[]) {
	
	printf("The list of odd numbers from 1..1000\n");
	//printf("1 3 5 7 9...\n");
	
	//for (int i = 1; i <= 1000; i += 2) //choi manh, dem cach 2
	//	printf("%d ", i);
	
	for (int i = 1; i <= 1000; i++)
		if (i % 2 == 1) //dung la may chia 2 du 1 phai ko
			printf("%d ", i);
			
	printf("\n");
	
	for (int i = 1; i <= 1000; i++)
		if (i % 2 != 0) //dung la may chia 2 ko du 0 phai ko?
			printf("%d ", i); //dung la may ko chia het cho 2 phai ko
	
	printf("\n");
	
	//BAI TUONG TU: TRO CHOI 5 10 15 20... IN RA CAC SO CHIA HET 5...
	for (int i = 1; i <= 1000; i++)
		if (i % 5 == 0)
			printf("%d ", i);	
	
	return 0;
}
