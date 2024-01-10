#include <stdio.h>
#include <stdlib.h>

//tui mun luu 10 cot diem cua mon hoc

int main(int argc, char *argv[]) {
	
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10; //khai bao le, tung bien 1
												   //ton suc nhung de lam!!!
												   
	float c[10]; //giong cach tren la co duoc 10 bien luon
				 //cuc nhanh, 
				 //muon bao nhieu bien chi thay trong [bao nhieu bien?]
	c[0] = 10.0;
	c[1] = 9.0;
	c[2] = 8.0;
	
	printf("%.2f %.2f %.2f %.2f %.2f\n", c[0], c[1], c[2], c[3], c[4]);											
	return 0;
}
