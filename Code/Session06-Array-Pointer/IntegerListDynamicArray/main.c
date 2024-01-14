#include <stdio.h>
#include <stdlib.h>

//Viet doan code luu thong tin cua 5 con so nguyen
//viet ham luu mang 5 so nguyen va in ra

void printIntegerList();

void printIntegerListHEAP();
//minh se di xin ram theo cach cua minh, minh se luu 5 10 15 20
//eo choi stack, xin ram o HEAP, di khai hoang tren rung

int main(int argc, char *argv[]) {
	
	//printIntegerList();
	printIntegerListHEAP();
	return 0;
}

void printIntegerList() {
	int a[] = {5, -10, 15, -20, 25, -30};
	//local array, mang nam trong STACK, 6 bien int nam trong STACK
	printf("The array has values of\n");
	for (int i = 0; i < 6; i++)
		printf("a[%d] = %d\n", i, *(a + i));
	printf("\n"); //song co trach nhiem, xuong hang sau khi in ra
}

void printIntegerListHEAP() {
	
	int* hari;
	int* p; //pointer, con tro, tao la 1 vung ram, cung la 1 bien
		    //nhung tao ko luu value binh thuong, tao di luu dia chi, danh ba
		    //tao can 1 toa do nao do, 1 dia chi nao do
	//p = &mot bien int nao do;
	//p = mot dia chi, mot toa do/con so ma la dia chi
	//p = (int*)6000000; //ep 6 trieu la dia chi
				       //byte 6M, +1 +2 +3 	4 byte cua bien int nao do
				       
	p = (int*)malloc(24);
				//em xin Windows 24 byte, chia het cho 4
				//con tro int mai mot se nhay 4 ++ --
				//ham malloc() xin 24 byte o HEAP, cam coc, giang day 24 byte
				//chot toa do dau, byte dau, dua dia chi do cho p 
	//p luu toa do dau tien cua 24 byte	
	//p co mui giong ten mang, vi luu toa do cum 4 dau day, luu dau day
	//p duoc quyen dung nhu mang, tuc la p[0] 4 byte dau
	//									 p[1] ten 4 byte ke
	//khai bao con tro, xai nhu mang
	p[0] = 5;
	p[1] = -10;
	p[2] = 15;
	p[3] = -20;
	p[4] = 25;
	p[5] = -30;
	
	printf("The array has values of (using HEAP)\n");
	for (int i = 0; i < 6; i++)
		printf("%d ", *(p + i));
							       
}
