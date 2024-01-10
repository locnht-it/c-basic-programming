#include <stdio.h>
#include <stdlib.h>

//Cho mang 5 con so, hay sap xep theo thu tu tang dan

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, 15, -20, 25, -500, -5000, 10, 1000};
	//ta lay [0] quet tu [1]
	//ta lay [1] quet tu [2]
	//ta lay [2] quet tu [3]
	//ta lay [3] quet tu [4] - MANG 5 THI LAY 3 QUET DEN 4
	
	//		dung vi 3 gan sat cuoi, so voi cuoi la xong
	//lay den ap chot mang, quet voi chot mang la xong
	
	int t;
	
	printf("The array before sorting ascending\n");	
	for (int i = 0; i < 9; i++)
		printf("%d ", a[i]);
	printf("\n");	
	
	for (int i = 0; i < 9 - 1; i++)
		for (int j = i + 1; j < 9; j++)
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	
	printf("The array after sorting ascending\n");		
	for (int i = 0; i < 9; i++)
		printf("%d ", a[i]);
	
	return 0;
}
