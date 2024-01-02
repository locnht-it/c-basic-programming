#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob = 2000;	//so thap phan luu vao trong RAM
	int grade = 10; //so thap phan cat vao trong RAM
	
	printf("Your year of birth is %d\n", yob);
	printf("Your grade is %d\n", grade);
	
	//hoi 1 cau, cac bien nam o dau trong RAM
	printf("Bien yob nam o vi tri la byte thu %u\n", &yob);
	printf("The address of variable grade is %u\n", &grade);
	
	//tinh tuoi -> ten goi cho con so noi ve so nam minh da song
	//cong thuc tinh tuoi: nam hien hanh - nam sinh
	//				tuoi =	2022		 -	yob
	int age = 2022 - yob;
	printf("As I guess, you are %d years old\n", age);
	
	//bai nay viet ko hay, goi la HARD-CODE, fix cac gia tri, chi chay
	//dung cho nam nay, cong thuc chua linh hoat.
	//nam sinh co dinh, muon tinh cho ban khac, anh chi, phai sua code
	//ra file .exe moi.
	//app nay ko co su tuong tac, ko co nhap tu ban phim, click chuot.
	//tuong tac thi moi thu vi, da dang ve data dua vao
	//ho tro cho user dung trong cong viec
	
	
	return 0;
}
