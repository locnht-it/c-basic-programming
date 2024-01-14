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

	printf("a has value of %u\n", a); //may la 1 bien	
	
	//ten mang la con tro int* ~~~ hari
	//a ~~~ hari deu la int*
	
	//hoi nay minh di qua mang bang hari
	//gio nay minh di qua mang = a kieu con tro, duoc hem?
	
	//in mang
	printf("The array has values: \n");	//in kieu binh thuong
	for (int i = 0; i < 5; i++)			//dung bien a[i] binh thuong
		printf("a[%d] = %d\n", i, a[i]);
	
	//biet thua a la ten mang, lai la bien con tro, nam dau thang &a[0] nhu Hari
	
	printf("The array has values (using pointer): \n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(a + i));

	//Van giu chot a tro dau day, + i de doi nha, lay dia chi moi
	//*(a + i) de lay value vung tro, ma ko mat chot!!!
	
	return 0;
}
