#include <stdio.h>
#include <stdlib.h>

//Viet app nho nho nhap chu cai dau trong ten ban - nhap chu hoa
//sau do in ra thuong

int main(int argc, char *argv[]) {
	
	char fL; //firstLetter - cu phap con lac da gu lung
			 //camel case notation
	printf("Input the 1st letter of your first name: ");
	scanf("%c", &fL);
	
	//gia bo nhap tu te!!! neu ko nhap tu te nhu go $, se bi an chui
	//dung if moi chui dc
	printf("You have just input the character: %c\n", fL);
	
	//doi hoa sang thuong
	fL += 32;
	
	printf("And it is converted to lower case as: %c\n", fL);
	printf("And it is converted to lower case as\t\t\t: %c\n", fL);
	
	return 0;
}
