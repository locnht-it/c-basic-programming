#include <stdio.h>
#include <stdlib.h>

//Viet ham tinh binh phuong cua 1 so nguyen

int fV3(); //int fV4(int x) 100% ham toan hoc y = f(x) = ...
void fV1(); //Ham nay khong co tra ve 1 gia tri nao ca!!!
			//tinh toan xu li thoai mai, nhung khong tra ve value

int main(int argc, char *argv[]) {
	
	//fV3(); //de chay choi vay do!!!
	
	//Vi ham la 1 gia tri, nen muon biet gia tri thi phai in ra chu
	//int result = fV3();
	//printf("The result: %d\n", result);
	
	//Vi ham la 1 value int nao do, cho nen ta co the xai may o trong
	//cac bieu thuc khac, trong cac cau lenh khac!!! - RE-USE
	
	//Dinh luat bac cau trong toan hoc - tuong duong value - do ngang gia tri
	//a = b; b = c -> a = c
	
	//printf("The result: %d\n", fV3());
	
	fV1();
	printf("The result: %d\n", fV1()); //bat chuoc kieu choi ham loai 3
	
	return 0;
}	

/*
int fV3()
{
	//vi ko co pheu hung dau vao, nen ta phai tu tao
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	printf("The function y = f(x) = x^2; f(%d)= %d\n", x, y);
}
*/

int fV3()
{
	//vi ko co pheu hung dau vao, nen ta phai tu tao
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	y = x * x;
	
	//ham da RETURN THI KO NEN CO LENH PRINTF(IN KET QUA XU LI);
	//vi neu lam the, tinh re-use/tai su dung se bi thu hep.
	//printf("The function y = f(x) = x^2; f(%d)= %d\n", x, y);
	
	return y; //doc la ten ham = gia tri cua y
			  //y duoc nem ra ngoai ten ham de dung tiep
			  //ten ham duoc xem la bien vi no co kieu du lieu - khai bao nhu bien
			  //lenh return chinh la gan 1 gia tri nao do cho ten ham
			  //ten ham tu nay ve sau xem nhu 1 value, dung toi ben luon
}

void fV1()
{
	printf("This function return no value. It is a void function\n");
}
