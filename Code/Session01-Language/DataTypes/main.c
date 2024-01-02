#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a = 10, b = 3; //8 bytes trong RAM da duoc cap luu 2 value/con so

	//1. Hoi a co gia tri may, b gia tri may, in ra man hinh
	printf("a = %d; b = %d\n", a, b);
	
	//2. Hoi nha cua 2 em o dau?
	printf("Addr of a: %u; addr of b = %u\n", &a, &b);
	
	//3. Nhap tu ban phim, scanf(&)
	
	//4. Tai 1 thoi diem, bien chi luu dc 1 value, 
	//mat moe no value neu gan value moi cho bien
	//ON-OFF dao thu tu bit 0,1 ra so khac ngay!!!
	//0, 1, 10, 11, 100, 101, 110, 111
	
	//int a = 69; an don, ko cho di tiep, CPU ko chiu
	//bien trung ten
	
	a = 69;
	//a bang may luc nay? quen nguoi cu 10, chi co 69 luc nay
	printf("a = %d; b = %d\n", a, b);
	
	//CHOI VOI SO THUC
	double c = 0.1, d = 3.14; //10% viet theo kieu so
	//vua khai bao vua gan value, nhieu bien cung dong
	//1. In ra ket qua 2 con so thuc bu
	printf("c = %.1lf; d = %.3lf\n", c, d);
	
	//2. Hoi nha cua 2 em c va d. 2 lenh tren cung hoi nha a, b
	printf("Addr of c: %u; addr of d: %u\n", &c, &d);
	
	//C cung cap 1 lenh de hoi CPU rang, mot data type bat ki 
	//chiem may byte trong ram
	printf("The number of bytes allocated of an int: %d\n", sizeof(int));
	int size = sizeof(int); //day la 1 ham/lenh oi ve 1 value
	printf("The number of bytes allocated of an int: %d\n", size);
	printf("The number of bytes allocated of an float: %d\n", sizeof(float));
	printf("The number of bytes allocated of an double: %d\n", sizeof(double));
	
	//CHOI VOI LONG, SO NGUYEN BU CHA BA
	int m = 1000000000; //%d
	long money = 3000000000L; //%ld
	printf("The amount 1: %d\n", m);
	printf("The amount 2: %ld\n", money);
	
	return 0;
}
