#include <stdio.h>
#include <stdlib.h>

//Tim gia tri min cua 1 mang 10 con so
//tra loi rang min nam o vi tri thu may trong mang
//IPO
//I: -5 10 100  -50  1000 1 -50 1001 
//				pos

//P: min = a[0]
//	if [1] < min
//	if [2] < min
//  if [3] < min, em co: min = [3] = 50
//						 pos = 3, vi tri nay thay 1 thang be hon min
//						 pos = vi tri thay
//	if [4] < min
//	if [5] < min
//	if [6] < min

//O: min = -50; pos =

int main(int argc, char *argv[]) {
	
	int a[] = {-5, 10, 100, -50, 1000, -50, 1, -1001};
	int min = a[0];
	int pos = 0; //cuc ki luu y; neu ko gan pos = 0, thi co the bi sai!!!
	
	for (int i = 1; i < 8; i++)
		if (a[i] < min) {
			min = a[i]; //co thang o vi tri i ma lai be hon min
			pos = i;	//nho lai vi tri i ngay
		}	
		
	printf("The min value is %d and it is found at the position of %d\n", min, pos);		
	
	return 0;
}
