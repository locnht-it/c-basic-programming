#include <stdio.h>
#include <stdlib.h>

//Hay luu 1 ki tu va in ra man hinh

int main(int argc, char *argv[]) {
	
	//char firstChar = 'V'; //cap nhay don luu 1 ki tu
	
    unsigned char firstChar = 'A';  
	
	//1 byte trong RAM on off thanh ki tu V
	//dung %c de chi cho CPU biet cach on-off
	//mo vao chip BIOS/UEFI tren mainboard de tim cach
	//anh xa thanh ki tu tren man hinh
	//day la su phoi hop cua CPU + RAM + Keyboard + VGA Card + Printer + Monitor + HDD/SSD + BIOS/UEFI
	
	printf("The 1st letter in your name is %c\n", firstChar);	
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	firstChar += 32; //doi sang thuong
	
	printf("After converting to lower case... \n");
	printf("The 1st letter in your name now is %c\n", firstChar);	
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	return 0;
}
