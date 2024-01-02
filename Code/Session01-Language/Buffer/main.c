#include <stdio.h>
#include <stdlib.h>

//Viet app nho nho, nhap vao nam sinh cua ban
//va nhap them ki tu dau tien trong ten cua ban
//sau do in ra: nam sinh, tuoi, ki tu ten!!!

int main(int argc, char *argv[]) {
	
	int yob, age;
	char fL;
	
	printf("You are required to input your profile\n");
	printf("1st, input your yob: ");
	scanf("%d", &yob);
	
	age = 2022 - yob;
	
	//truoc lenh nhap chuoi/ki tu ta xoa bo dem/d?nac
	fflush(stdin); //flush: don, rua
				   //stdin: standard input
				   //vung RAM chuan danh cho viec nhap data
	//MAC, Linux: fpurge(stdin);  __fpurge(stdin);
	
	printf("2nd, input 1st letter in your first name: ");
	scanf("%c", &fL);
	
	printf("Your profile is: \n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your name (brief): %c\n", fL);
	
	//Nhap vao tu ban phim 2 con so nguyen x, y. Sau do in ra ket qua
	int x, y;
	
	printf("You are required to input two integers\n");
	//scanf("%d", &x);
	//scanf("%d", &y);
	scanf("%d%d", &x, &y);
	
	printf("The sum of %d and %d is %d\n", x, y, (x + y));
	//lam bieng tao bien trung gian sum = x + y
	//xet cho cung x + y la 1 value, ta in luon, khoi can gia tri trung gian/bien trung gian sum
		
	return 0;
}
