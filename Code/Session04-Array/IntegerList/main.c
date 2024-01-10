#include <stdio.h>
#include <stdlib.h>

//Nhap 1 mang 10 con so tu ban phim. Kiem tra xem so 10
//co xuat hien trong mang hay ko
//IPO
//I: 10 bien
//P: loi tung bien ra hoi value == 10 ko, co thi ket luan
//O: in ra co hay ko

int main(int argc, char *argv[]) {
	int a[] = {10, 6, -1000, 100, 50, 70, 6, 6, -1, 10};
	//nen nho, ta co 10 bien int do heng a[0] a[1]...
	//						 binh dang moi bien int khac int yob;
	//duyet mang, quet tu dau den cuoi mang
	for (int i = 0; i < 10; i++){
		if (a[i] == 10)
			printf("Hey, found 10 at position of %d\n", i);
		else
			printf("Hey, 10 not found in the array\n");
	}
	return 0;
}
