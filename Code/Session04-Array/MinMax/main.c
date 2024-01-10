#include <stdio.h>
#include <stdlib.h>

//Tim va in ra gia tri lon nhat, nho nhat o trong mang 10 phan tu
//IPO:
//I: 50000   10  50   100  -50 1000 1 -5 1001 10
//			[1]  [2]  [3]
//min = [0] = 50000
//if [1] < min -> min = 10
//if [2] < min -> min = 10
//...[4] < min -> min = -50

//P: gia dinh -5 la min (dung sai tu tu, con nhieu so de kiem chung)

//   min = [0] = -5
//   quet mang, quet tu vi tri [1] tro di
//	 if [1] < min, neu co thi min la [1] nhe, ko thi thoi. KO
//	 if [2] < min, neu co thi min la [2] nhe, ko thi thoi. KO
//   if [3] < min, neu co thi min la [3] nhe, ko thi thoi. KO
//   if [4] < min, neu co thi min la [4] nhe, ko thi thoi. CO
//	    -50 < -5			  min = [4] = -50
//   if [5] < min, ...
//	 if [6] ...
//   if [9]
//O: min, max

int main(int argc, char *argv[]) {
	
	int a[] = {-5, 10, 50, -50, 1000, 1, -50, 1001, 1, 10};
	int min = a[0]; //gia bo min tam thoi la thang dau
					//ta duyet qua mang coi co thang nao nho 
					//hon min ko, neu co, doi min la thang do
					//di het mang, hoi, doi neu can
	int max = a[0]; //gia dinh max tam bang thang daau
					//duyet qua mang, coi thang nao lon hon max?
					//thang do phai la max, doi ngay
					
	for (int i = 1; i < 10; i++) {
		if (a[i] < min)	//may be hon min ko
			min = a[i];	//co, thi min la may day
		
		if (a[i] > max) //may co lon hon max ko
			max = a[i]; //co, thi max la thang moi	
	}
		
	printf("The min number of this array is %d\n", min);
	printf("The max number of this array is %d\n", max);
	
	return 0;
}
