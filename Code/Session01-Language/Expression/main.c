#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a = 10, b = 3;
	int result = 10 - 30;
    result = a - b; //tinh toan di roi gan vao bien result
	
	printf("a = %d\nb = %d\n", a, b);
	printf("result = %d\n", result); //7 HENG!!!
	
	//phep nhan, phep chia
	result = a * b;
	printf("result = %d\n", result); //30
	
	result = a / b; //CHIA NGUYEN
	printf("result = %d\n", result); //3 NGUYEN
	
	float r = a / b; //3 ma lai luu trong thuc la 3.000000
	printf("r = %f\n", r); 
	
	//float re = a * 1.0 / b;
	
	//float re = a / b * 1.0; //sai nhen
	float re = a / (b * 1.0);
	
	printf("re = %f\n", re);
	
	//---------------------------------------------
	//PHEP TOAN DAC BIET, 1 NGOI (1 SO HANG), TANG TU THAN
	int n = 10;
	
	//1. n dang bang may?
	printf("n = %d\n", n);
	
	//2. nha n o dau?
	printf("Addr of n: %u\n", &n);
	
	//3. Tui muon tang n len 1 don vi/1 gia tri
	//n = 11; //sai, dich la gan n = 11, on-off vung ram thanh con so 11
			//hong co tinh toan, dau co tang n = 11 minh tu tinh ben ngoai may tinh
	n = n + 1;
	//doc: n se duoc gan 1 gia tri nao do, la may tu tu ta xem
	//phep tinh nay goi la phep tang tu than, tu lam ra tien
	//bo sung vao vi cua ta luon
	//age = 2022 - yob; //ko tang giam tu than		
	printf("#1 increasing by 1: n = %d\n", n);
	
	//4. Tui mun tang n len tiep 1 don vi nua -> n = 12, vi truoc do n = 11
	//n = n + 1; okie
	n += 1; //viet tat hon, tui n muon tang 1, + roi = gan luon
	printf("#2 increasing by 1: n = %d\n", n); //n = 12
	
	//5. Toi muon tang tiep n len 1 nhat nua!!!
	//n += 1; okie
	n++;
	printf("#3 increasing by 1: n = %d\n", n); //n = 13
	
	//6. Toi van muon tang them 1 nhat nua
	++n;
	printf("#4 increasing by 1: n = %d\n", n); //n = 14
	
	//--------------------------------------------
	//XET RIENG ++ --
	int m = 10, r1;
	printf("m = %d\n", m); //10
	//r1 = m++;
	r1 = ++m;
	printf("r1 = %d; m = %d\n", r1, m);
	
	//-------------------------------------------
	//Phep tu than ++ --
	//1. Tui muon tang m len 1 don vi
	m++;
	printf("m now is: %d\n", m);
	
	//2. Tui muon tang m len 8 don vi, de dc 20
	//m = m + 8; okie
	m += 8; //pro
	printf("For the last, m now is: %d\n", m); //20
	
	
	
	return 0;
}
