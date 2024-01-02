#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Kiem tra xem tuoi cua minh co la thanh xuan hay ko?
	int age = 19;
	if (age >= 20 && age <= 30)
		printf("Cha`o thanh xua^n!!!\n");
	else
		printf("I don't care!!! You are too old or too young!!!\n");
	
	//Viet doan code moi nhap vao 1 con so nguyen bat ki
	//sau do in ra thong bao rang con so nay co nam ngoai 
	//mien/doan [1...100] hay ko
	//Vi du goi con so can nhap la x
	//go x = -5 -> ngoai doan [1...100]
	//go x = 101 -> ngoai doan
	//go x = 50 -> trong doan
	int x;
	printf("Input an integer. I will check if this number is in the range of [1..100] or not.\n");
	printf("Input an integer: ");
	scanf("%d", &x);
	
	int result; //kiem tra ngoai mien hay ko
	result = x < 1 || x > 100;
	//x = -5 -> result = 1
	printf("range result: %d\n", result);
	
	if(x < 1 || x > 100) 
		printf("Number %d is out of the range of [1...100]\n", x);
	else
		printf("Number %d is in the range of [1...100]\n", x);					
		
	return 0;
}
