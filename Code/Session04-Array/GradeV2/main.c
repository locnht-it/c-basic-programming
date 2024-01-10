#include <stdio.h>
#include <stdlib.h>

//Luu 10 cot diem cua mon C

int main(int argc, char *argv[]) {
	
	float c[10]; //co 10 bien float [0...]
	//scanf("%f", &c[0]); //tiep tuc thay 0, bang 1, 2...
	printf("Please input 10 grades of C class (0..10): \n");
	for (int i = 0; i < 10; i++) {
		printf("Input grade[%d]: ", (i + 1)); //2 lenh printf() va scanf() { }
		scanf("%f", &c[i]);			//lua dao chi so mang
	}
	
	printf("Here is your grades\n");
	for (int i = 0; i < 10; i++)
		printf("%.2f\t", c[i]); //bien float ten phuc tap 1 ti thoi ma!!!
	
	return 0;
}
