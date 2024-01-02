#include <stdio.h>
#include <stdlib.h>

//Viet app nho nho nhap 2 so tu ban phim va in ra so lon nhat 
//trong 2 so vua nhap
//IPO

//I: can 2 con so -> 2 bien int
//P: gia su co 2 con so qua 2 bien a = 5, b = 1
//	 so sanh a va b, coi dung a > b ko?, co -> a max
//										ko dung a > b
//  									a < b; a == b nua chi
// if (a > b) max la a
// else if (a == b)
//	2 dua bang nhau
// else //a < b
//	b la max
//O: dua nao lon nhat trong 2, in ra con so lon nhat

int main(int argc, char *argv[]) {
	
	
	int a, b;
	printf("This program will show the maximum value of two numbers\n");
	printf("Please input two integers:");
	
	scanf("%d%d", &a, &b); //2 lenh scanf() rieng, nhap dung dau cach, tung enter rieng
	if (a > b)
		printf("You input two numbers %d, %d and the max number is %d\n", a, b, a);
	//else nghia la a == b hoac a < b deu la nguoc lai cua a > b
	else if (a < b)
		printf("You input two numbers %d, %d and the max number is %d\n", a, b, b);
	else //a == b roi
		printf("You have just input two equal numbers, they are %d\n", a);
	
	return 0;
}

//BAI TUONG DUONG...
