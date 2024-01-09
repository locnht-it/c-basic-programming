#include <stdio.h>
#include <stdlib.h>

int yob; //bien toan cuc, gan gia tri luc khai bao/gan sau deu duoc

//yob = 2002 + 1; MAY PHAI THUOC HAM NAO DO!!!

void printYob();
void printCurrentYob(); //prototype

int main(int argc, char *argv[]) {
	
	//printYob(); //ham cua ta xem nhu 1 lenh printf() scanf()
	printCurrentYob(); //in nam sinh moi nhat xem sao
	printYob();
	
	printf("Your yob in main %d\n", yob);
	return 0;
}

void printYob() {
	yob = 2002; //bien toan cuc ham co quyen xai!!!
	printf("Your yob: %d\n", yob);
}

void printCurrentYob() {
	yob = 2003; //tui cung co quyen xai bien toan cuc
	printf("Your current yob: %d\n", yob);
}
