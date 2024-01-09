#include <stdio.h>
#include <stdlib.h>

int yob = 2002; //bien toan cuc, gan gia tri luc khai bao/gan sau deu duoc

void printYob();
void printCurrentYob(); //prototype

int main(int argc, char *argv[]) {
	
	
	printYob();						 //yob local = 2005!!!
	
	printf("Global yob: %d\n", yob); //2002 toan cuc!!!
	
	return 0;
}

void printYob() {
	
	int yob = 2005; //bien local trung ten bien toan cuc.
			 //trong ham xai bien yob thi xai yob nao!!!
			 //UU TIEN LOCAL!!!
	int age = 2022 - yob; //17 tuoi
	printf("Your yob: %d and your age: %d\n", yob, age);
}

void printCurrentYob() {
	
	//thu mon men xem bien nha khac dc ko???
	printf("Your age is: %d\n", age); //tui mun so bien age cua ham printYob()
}
