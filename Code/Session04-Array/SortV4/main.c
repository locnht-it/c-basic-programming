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

//MANG CO BAO NHIEU BIEN, FOR < SO BIEN LA ON!!!
//MANG CO 5, FOR < 5
//MANG CO 8, FOR < 8, VI DEM TU 0, FOR DEN 7 LA HOP LI

int main(int argc, char *argv[]) {
	
	int a[] = {50, 10, 100, -50, -50000};
	int t;
	
	for (int i = 1; i < 5; i++)
		if (a[0] > a[i]) { //may dung dau mang, phai la nho nhat
						   //ma lai lon hon dua sau i tu 1
			t = a[0];    //50 cat di
			a[0] = a[i]; //10
			a[i] = t;	 //50	
			//break; //thu xem sau khi i = 1 thi co dung 10 50 ko	   
		}	
	
	//LOAI BO a[0] da min roi, ta xem phan con lai cua mang
	//tinh tu a[1] tro di, lai phai tim min tu a[1] tro di
	
	//phan tu nho nhi da xuat hien ve dau [1]
	for (int i = 2; i < 5; i++)
		if (a[1] > a[i]) {
			t = a[1];
			a[1] = a[i];
			a[i] = t;
		}
		
	//loai bo [0] [1] da xong, [2] quet ve cuoi
	for (int i = 3; i < 5; i++)
		if (a[2] > a[i]) {
			t = a[2];
			a[2] = a[i];
			a[i] = t;
		}	
	
	//[3] xuat phat ve cuoi	
	for (int i = 4; i < 5; i++)
		if (a[3] > a[i]) {
			t = a[3];
			a[3] = a[i];
			a[i] = t;
		}
	
	printf("After swapping the min value, the array now is\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	
	return 0;
}
