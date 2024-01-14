#include <stdio.h>
#include <stdlib.h>

void printArray(); //ham nay se in ra 1 mang cac so nguyen

void printArrayHEAP();

void inputArray();

void inputArrayV2(); //version linh hoat so phan tu mang

void inputArrayHEAP();

int main(int argc, char *argv[]) {
	//printArray();
	//printArrayHEAP();
	//inputArray();
	//inputArrayV2();
	inputArrayHEAP();
	return 0;
}

void printArray() {
	int a[] = {5, -10, 15, -20, 25};
	//		  a[0] [1] [2] [3]  [4]
	
	printf("The array has values of (using [i])\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
	
	printf("\n");
	//ten mang con la con tro, bat buoc chot/tro vao &a[0]
	//ko cho tro lung tung cho khac nhu con tro khai bao *
	//a = &a[0]
	
	printf("The array has values of (using *)\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(a + i));
		
	//a++: may la ma mi, chot vao thang dau day!!! ko duoc nhay
	printf("\n");
	
	int* p; //p = &cua-ai-do = dia chi/con so toa do cua bien int nao do
	p = a; //ko ai cam a = &a[0]
	
	//Kiem tra dia chi
	printf("Checking the address\n");
	printf("The address of all variables in the array\n");
	for (int i = 0; i < 5; i++)
		printf("Addr of a[%d] = %u\n", i, (p + i));
		
	printf("\np points to %u\n", p); //vi p = a = &a[0]
			
	//p = &a[0]; nhu nhau
	//CON TRO THUAN CHUNG
	printf("The array has values of (using *p)\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(p + i));
		
	printf("\nThe array has values of (using *p v2)\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, p[i]);
		
	//con tro thuan chung ngon hon con tro ten mang 1 chut, no duoc quyen
	//++ --
	printf("\nThe array has values of (using *p v3)\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(p++));
		
	//Kiem tra thu coi co dung p doi nha, doi tro hay ko
	printf("\nFinally, p points to %u\n", p); //vi p = a = &a[0]
		
}

//vung nho oanh tac tu do!!! 
void printArrayHEAP() {
	
	int* hari; //can lam luon mot dia chi, co the la tro 1 bien int &tt &td
			   //can lam luon 1 dia chi, co the la dau mang a[] = {...}
			   //con tro co the tro bien don, bien dau mang
			
	hari = (int*)malloc(20); //xin 20 byte/4 = 5 bien int
	
	//Student x =	new Student(...);
	//		stack (neu x khai bao trong ham)
	//					heap
	
	hari[0] = 5;
	hari[1] = -10;
	hari[2] = 15;
	hari[3] = -20;
	hari[4] = 25;
	
	printf("The array has values of (dynamic array)\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
		//printf("%d ", hari[i]);
		
	//CAU LENH CUC KI QUAN TRONG!!!
	free(hari); //tra lai vung RAM cho Windows sau khi chay xong
				//HEAP tra lai cho Windows
				//hari nam trong stack, Windows chu dong thu lai vung RAM nay
	//NEU KO FREE VUNG MALLOC, MA CU CHAY APP CHAY HAM NHIEU LAN, VUNG HEAP CU TANG DAN
	//WINDOWS KO LAY LAI DUOC, RAM GIAM DAN DUNG LUONG
	//RO RI MEMORY, LEAK MEMORY
	
}

//Nhap 1 mang tu ban phim
void inputArray() {
	int a[50];
	//mang khai bao 50 vay minh nen nhap bao nhieu so, thich nhieu thi nhieu
	printf("You are required to input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input a[%d]: ", (i + 1)); //lua dao chi so, lap trinh dem tu 0
										  //ngoai doi dem tu 1
		//scanf("%d", &a[i]);
		scanf("%d", (a + i)); //dung dia chi gui scanf() kieu con tro								  
	}
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", *(a + i));
		
}

void inputArrayV2() {
	//moi nhap 1 mang tu ban phim, kich thuoc mang se khai bao sau!!!
	//sau khi hoi ban muon may bien???
	int n;
	printf("How many numbers do you want to input? ");
	scanf("%d", &n); //may muon mang may phan tu, go vao.
	
	int a[n]; //tuy n may, mang la may!!!
	
	printf("You are required to input %d numbers\n", n);
	for (int i = 0; i < n; i++) {
		printf("Input a[%d]: ", (i + 1));
		scanf("%d", (a + i));
	}
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++)
		printf("%d ", *(a + i));	
}

void inputArrayHEAP() {
	
	int n;
	printf("How many numbers do you want to input? (HEAP) ");
	scanf("%d", &n); //may muon mang may phan tu, go vao.
	
	int* hari = malloc(4 * n);	//boi so cua 4 vi lat hoi nhay 4 - bien int
	//mang n phan tu roi
	printf("You are required to input %d numbers\n", n);
	for (int i = 0; i < n; i++) {
		printf("Input a[%d]: ", (i + 1));
		scanf("%d", (hari + i));
	}
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < n; i++)
		printf("%d ", hari[i]);
			
	free(hari); //don dep RAM
}
