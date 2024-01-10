#include <stdio.h>
#include <stdlib.h>

//Khao sat RAM duoc cap cho mang

int main(int argc, char *argv[]) {
	float c[10]; //co 10 bien roi do, c[0], c[1]...
	
	//hoi nha cua 10 bien/phan tu mang/element o dau???
	/*
	printf("The address of c[0] is %u\n", &c[0]);
	printf("The address of c[1] is %u\n", &c[1]);
	printf("The address of c[2] is %u\n", &c[2]);
	printf("The address of c[3] is %u\n", &c[3]);
	printf("The address of c[4] is %u\n", &c[4]);
	*/
	printf("The address of all of elements in the array:\n");
	for (int i = 1; i <= 10; i++)
		printf("The address of c[%d] is %u\n", i, &c[i - 1]);
		
	//[i] i chay tu 0 .. cuoi mang
	//[index chi so phan tu/thu tu/bien thu may!!!]
	
	//MOT DIEU CUC KI DAC BIET KHI CHOI VOI MANG
	//NO DINH DEN TRUYEN THAM CHIEU!!!
	//HAM MA NHAN VAO MANG, THI KO PHAI LA TRUYEN GIA TRI
	//MA LA TRUYEN THAM CHIEU!!!
	//KO PHAI LA TRUYEN KIEU TAO CHO MAY 1 COPY/PHOTO DAU
	
	//TEN MANG DAC BIET LAM LUON, TEN MANG LA 1 BIEN, CO VALUE
	//SIEU DAC BIET, CHINH LA SO NHA CUA THANG BIEN DAU MANG
	printf("The value of c is %u\n", c);
	printf("The address of c is %u\n", &c);
	//in gia tri cua 1 bien thi % ma quat thoi
	//%u: unsigned so nguyen ko dau, tuc la so +
	//%d: so nguyen co dau, tuc la gom + va -
	//so nha chac chac la so + nen co quyen %d %u
	//-2ty1 +2ty1

	return 0;
}
