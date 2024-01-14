#include <stdio.h>
#include <stdlib.h>

//Sap xep mang cac so nguyen giam dan

//Hoan doi than xac - dung bien trung gian de luu gia tri cu

//void swap(int a, int b); //dua cho tao 2 con so, tao se hoan doi value
//			  5		10
//			x = 5	y = 10
//truyen tham tri - pass by value
//ban goc ko doi x y, ma chi doi trong ham a b ma thoy

void swap (int* a, int* b); //trong ham, *a chinh la x; *b chinh la y
//									2 * doi nhau chinh la x y doi nhau
//	main()	&x		&y
//	main()	&a		&b

//SAP XEP 1 MANG GIAM DAN
void sortArray(int a[], int size);
//ham nhan vao 1 mang co size phan tu!!!
//ko co size phan tu, sao ta for duoc

int main(int argc, char *argv[]) {
	
	int x = 10, y = 100;
	printf("Before swapping, x = %d; y = %d\n", x, y);
	
	swap(&x, &y);
	
	printf("After swapping, x = %d; y = %d\n", x, y);
	
	int a[] = {5, -10, 15, -20, 25, 1000, 1};
	sortArray(a, 7);
	
	return 0;
}


//PASS BY REFERENCE/POINTER
//			&x		  &y
void swap(int* a, int* b) {
	int t = *a; //luu lai gia tri cu cua bien o xa xa x ngoai main()
	*a = *b;	//x xa xa main() bang y xa xa main()
	*b = t;
}


/*
void sortArray(int a[], int size) {
	int t;
	
	printf("The array before sorting\n");
	for (int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, a[i]);
	
		
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if(a[i] < a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			
	printf("The array after sorting descending\n");
	for (int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, *(a + i));
}
*/

void sortArray(int a[], int size) {
	int t;
	
	printf("The array before sorting\n");
	for (int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, a[i]);
	
		
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if(a[i] < a[j]) 
				swap(&a[i], &a[j]);
			
	printf("The array after sorting descending\n");
	for (int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, *(a + i));
}
