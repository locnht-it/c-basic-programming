#include <stdio.h>
#include <stdlib.h>

//Tim gia tri min cua 1 mang 10 con so va doi cho voi thang dau mang
//IPO
//I: 	-5  	10  100  -50  1000   1   -50 -1001 
//		a[0]
//  	min
//				[1] [2]
//						  [3] thay vi nho vi tri, sau nay doi
//							  ta doi luon
//		-50				  -5
//							   [4]  [5] [6] [7] doi
//		-1001								 -50

int main(int argc, char *argv[]) {
	
	int a[] = {50, 10, 100, -50, 1000, -50, 1, 1001};
	int t;
	
	for (int i = 1; i < 8; i++)
		if (a[0] > a[i]) { //may dung dau mang, phai la nho nhat
						   //ma lai lon hon dua sau i tu 1
			t = a[0];    //50 cat di
			a[0] = a[i]; //10
			a[i] = t;	 //50	
			//break; //thu xem sau khi i = 1 thi co dung 10 50 ko	   
		
		}		
	
	printf("After swapping the min value, the array now is\n");
	for (int i = 0; i < 8; i++)
		printf("%d ", a[i]);
	
	return 0;
}
