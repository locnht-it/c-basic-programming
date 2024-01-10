#include <stdio.h>
#include <stdlib.h>

//Nhap 1 mang 10 con so tu ban phim. Kiem tra xem so 10
//co xuat hien trong mang hay ko
//IPO
//I: 10 bien
//P: loi tung bien ra hoi value == 10 ko, co thi ket luan
//O: in ra co hay ko

int main(int argc, char *argv[]) {
	int a[] = {1, 6, -1000, 100, 10, 70, 6, 6, -1, 100};
	int found = 0; //gia bo ban dau 0 thay 10 cho den khi thay em
				   //thi anh doi trang thai, bien se giu value cu
				   //cho den khi bi thay doi
				   
	for (int i = 0; i < 10; i++){
		if (a[i] == 10) {
			found = 1; //chet nhen, bat gap 10 roi, phat co, eo tim nua
			break;
		}	
	}
	
	//Kiem tra co de in ket qua
	if (found == 0)
		printf("10 not found!!!\n");	
	else
		printf("10 found!!!\n");
		
	return 0;
}
