#include <stdio.h>
#include <stdlib.h>

//BA CON GIUA MANG VA CON TRO
//MANG TINH, MANG DONG, CON TRO CO BA CON!!!
//TRUYEN THAM CHIEU, MANG/CON TRO LA DAU VAO CUA HAM

//luu va in ra mang 10 con so nguyen bat ki

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, -15, 20, -25};
	//mang la khai bao nhieu bien cung luc, cung kieu, cung ten
	//o sat nhau!!!
	
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	
	//cac nha int cach nhau 4, uoc gi dung con tro ++ -- leo qua
	//xem cac value!!!
	
	int* hari = &a[0]; //tui tro vao dau day dc hok, luu danh ba
					   //so nha cua bien dau mang!!!
					   
	//in mang coi
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *hari);
	
	printf("a[1] = %d\n", a[1]);	
	hari++; //nhay 1 can nha, int* nhay 4 byte sang nha ke
	printf("a[1] = %d\n", *hari);
	
	//++ roi in * di het mang, sao ko for
	
	hari = &a[0]; //reset con tro tro ve dau mang!!!
	
	//IN CA MANG CHO NGON
	printf("The array has values:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
		
	//hari van chot dau mang
	//lay toa do + i, roi vao toa do do, in value goc
	//tao van chot dau mang	
	
	//bien con tro + thi la co dia chi moi
	//vao dia chi moi *(cua con tro +)
	//con tro van chot, ma van duyet duoc mang!!!
	
	return 0;
}
