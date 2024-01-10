#include <stdio.h>
#include <stdlib.h>

//Ki thuat khai bao mang va gan luon gia tri
//int a = 10; //mang co tro nay ko. Co

int main(int argc, char *argv[]) {
	
	//mang giong nhu tap hop/day value o toan hoc pho thong!!!
	float c[10] = {1, 1, 2, 3, 5, 8};
				  //cho 6 diem hoy, ma lai co 10 bien
				  //gan value ngay cho 6 phan tu dau cua mang
				  //[0] = 1; [5] = 8
				  //bien con lai value DEFAULT = 0; KO RAC LUNG TUNG
	printf("Your ten grades\n");
	for (int i = 0; i < 10; i++)
		printf("Grade [%d] = %.2f\n", i , c[i]);			
	
	float col[] = {2, 4, 6, 8, 10};
	//cau lenh nay ko noi ro co bao nhieu bien duoc cap. Nhung lai
	//gan san value cho 1 so bien. Mang se tu dong duoc cap so bien
	//tuy theo so luong value duoc gan; bai nay la 5
	//bai nay chinh la mang [5]
	
	//float a[]; //bi chui vi ko noi ro bao nhieu bien
	//phai noi ro so bien can xin, gan value sau cung duoc
	//vua xin bao nhieu, vua gan
	//vua gan, ma ko them noi xin, thi se cap theo so gan
	
	return 0;
}
