#include <stdio.h>
#include <stdlib.h>

//CHO TAO DIA CHI, TAO SE DON NHA MAY!!!

//void f(int x); //moi lan xai ham, hay dua tui 1 value thuong thoi
			  //tui can 5 10 15 20 25 hay 1 bien int binh thuong!!!
			  //TRUYEN THAM TRI, CHI CAN THAY 1 VALUE/1 GIA TRI LA OKIE
			  //GIA TRI THUONG

void f(int* x); //moi lan xai ham, dung dua value 5 10 15 20, ko can
			   //TRUYEN THAM CHIEU, CHIEU TU XA
			   //TAO CAN 1 TOA DO, CHO TAO TOA DO NAO DO, XA GAN KO QUAN TAM
			   //DUA TOA DO DAY, KO DUA VALUE THUONG
			   //TAO CAN DIA CHI 1 BIEN INT O DAU DO, LAT TAO DON NHA NO!!!
			   
//LOGIC, *X SE CHINH LA BAN GOC, BIEN O XA XA NAO DO			   

int main(int argc, char *argv[]) {
	
	int x = 10; //bien local
	printf("In main(), before calling f(), x is %d\n", x);
	
	//MUON THAY DOI X MAIN, DUA DIA CHI CHO HAM
	f(&x);
	
	printf("In main(), after calling f(), x finally is %d\n", x);
	
	return 0;
}
//CHOT DEAL: MUON THAY DOI GIA TRI O NOI GOI HAM, THI CAN DUA DIA CHI 
//CHO HAM, HAM SE THAY DOI NOI GOC GOI HAM!!!

void f(int* x) { //bien local khac
	*x *= *x; //chet me em!!!
	
	//*x =		*x			*		*x;
	//bien-xa= bien-xa	phep nhan	bien-xa
	//x-main = x-main		*		x-main
	
	//*con-tro la den noi xa, vi tt, vi td
	//trong ham lam phep nhan, o xa bi anh huong
	//*hari lam gi, vi tt het tien!!!
}
