#include <stdio.h>
#include <stdlib.h>

//Luu 10 cot diem cua mon C
//IPO: 10 bien


int main(int argc, char *argv[]) {
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10; //khai bao le
	float c[10]; //y chang ket qua cau lenh tren, co 10 bien luon!!!
				 //c[0], c[1], c[2], ... c[9]
				 
	c1 = 10.0; //bien le
	c[0] = 10.0; //bien kieu mang, van la bien float thoi ma
				 //ten phuc tap hon
	printf("Bie^'n le?: %.2f %.2f %.2f\n", c1, c2, c3);
	printf("Bie^'n ma?ng: %.2f %.2f %.2f\n", c[0], c[1], c[2]);
	//Moi bien trong mang, tinh tu 0, duoc goi la 1 phan tu mang, ELEMENT
	
	//muon nhap gia tri cho bien thuong/bien mang/phan tu cua mang
	printf("Input 2 grades (0..10): ");
	scanf("%f", &c2); //bien thuong
	scanf("%f", &c[1]); //bien mang, may la bien float hoy ma
	
	printf("After inputing two grades, the current grades are:\n");
	printf("Bie^'n le?: %.2f %.2f %.2f\n", c1, c2, c3);
	printf("Bie^'n ma?ng: %.2f %.2f %.2f\n", c[0], c[1], c[2]);			 
	
	//neu tui muon nhap het 10 bien le, 10 bien si - MANG
	scanf("%f %f %f %f %f %f", &c1, &c2, &c3, &c4, &c5, &c6);// oi vi mat suc
	scanf("%f", &c[i]); //i chay tu 0..9
	
	return 0;
}
