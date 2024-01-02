#include <stdio.h>
#include <stdlib.h>

//In ra cac con so tu 1..100
//IPO
//I: ko can dau vao, vi moi thu ro, in tu 1..100
//P: ko phuc tap, printf();
//O: in ra thoi ma

int main(int argc, char *argv[]) {
	
	printf("The list of integers from 1..100\n");
	printf("1 2 3 4 5 6 7 8 9 10...\n");
	
	//for (int i = 1; i <= 100; i++) 
	//	printf("%d ", i);
	
	for (int i = 100; i < 200; i++)
		printf("%d ", (i - 99));
	
	
	//i: index, chi muc, so dem
	//bien sieu cuc bo - local, dung trong for
	//het for het bien
	//printf("\n%d\t", i); //bao loi i ko ton tai!!!
	

	
	return 0;
}
