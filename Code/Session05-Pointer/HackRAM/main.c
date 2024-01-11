#include <stdio.h>
#include <stdlib.h>

//le tinh nhan/ 8.3, tang phieu mua hang, $?
//anh i co tang minh tien/phieu mua hang hay ko???
//?$

int main(int argc, char *argv[]) {
	
	int gift = 16164; //trong RAM luu con so 4 byte
					  //2 byte duoi onoff thanh con so 63 36
	int* hari = &gift;
	//char* hack = &bien char khac; 
	//char* hack = & dia chi bien char khac;
	char* hack = &gift; //hoi lay, hoi lieu, cung dia chi hoy ma!!!
	//nhung minh chi nhin 1 byte hoy
	
	//hari phai nhin 4 byte lan
	
	//hoi Hari, em dang luu toa do, dia chi gi
	printf("Gift addr = %u\n", hari); //dia chi ne: 6487564
	
	//hoi rang hari dang tro den value cu the nao???
	printf("Gift = %d\n", *hari); //16164
	
	//hoi hack dang tro ki tu gi
	printf("Hack ? $$$$ = %c\n", *hack); //$
	
	hack++; //len 73 do, ko nhay 4 byte sang int ke neu co
	    	//char* nhay tung byte, van xa quan trong gift
	printf("Finally hack ? ???? = %c\n", *hack);	
	printf("65 address? = %u\n", hack); //65
	
	return 0;
}
