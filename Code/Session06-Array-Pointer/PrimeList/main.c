#include <stdio.h>
#include <stdlib.h>

//Cho 1 mang cac so tu nhien 5 10 15 23 25 3 5 7 11 13
//In ra cac so nguyen to xuat hien trong mang nay!!!
//P: quet mang/ra khap cac phan tu mang
//	[0] em la 5, may co nguyen to hok? co, in may
//	[1] em la 10, may co nguyen to hok? ko, ke may
//  [2] em la 15, may co nguyen to hok? ko, ke may
//	[3] em la 23, may co nguyen to hok? em co, in may
//	...
//	HOI HOAI, LAP LAI 1 CAU CHUYEN: X, MAY CO NGUYEN TO KO???

//	CO THU BI LAP LAI, NO CHUYEN BIET -> CHIA DE TRI - TACH HAM
//	TA CO 1 HAM KIEM TRA 1 SO CO LA NGUYEN TO HAY KO?

//O: 5, 23, 3, 5, 7, 11, 13

//Co 4 loai ham
//void isPrime(int n); //in ra may n la nguyen to hay ko???
int isPrime(int n); // y = f(x) = x^2
//y = f(5) = 1;
//y = f(6) = 0;

//nhan vao 1 con so tu nhien, tra ve 1: neu nguyen to
//									 0: neu ko nguyen to


//			n = 10; 10 co nguyen to hay ko?
//P: So nguyen to la so CHI CO 2 uoc so la 1 va chinh no
//	 co nhieu cach lam bai nay
//	 don gian nhat la dem so uoc so, may chia het nhung dua nao, may dua!!!
//10
//10		chia het 1 hem? CO EM,	count++; 1
//					 2 hem? co em,	count++; 2
//					 3 hem? hok
//					 4 		hok
//					 5		co		count++; 3
//					 6		hok
//					...
//					 10		co		count++; 4
//		10 chia het cho i?
//		10 % i == 0	hay ko % == 0 nghia la chia het. % lay du

//cho 1 mang, in ra cac nguyen to

//ham nhan vao 1 mang, size. In ra cac so nguyen to xuat hien trong mang
voidPrintPrimeList(int a[], int size);

int main(int argc, char *argv[]) {
	
	/*
	printf("5? %d\n", isPrime(5));
	printf("101? %d\n", isPrime(101));
	
	int result = isPrime(10);
	printf("10? %d\n", result);
	*/
	
	int a[] = {5, 10, 15, 23, 25, 3, 5, 7, 9, 21, 13};
	printPrimeList(a, 11);
	
	return 0;
}

int isPrime(int n) {
	int divisorCount = 0; //khoi dau chua co thay US nao
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			divisorCount++;	//neu co chia het cho i, thi count++
							//tang so uoc so len 1 don vi, nhoi heo dat
	
	//het for roi, xet het uoc so roi
	if (divisorCount == 2)	
		return 1; //2 uoc so thi return 1 la nguyen to
	
	//else
	return 0; //may nhieu uoc so qua, eo la nguyen to					
}

void printPrimeList(int a[], int size) {
	
	int result; //chua ket qua nguyen to hay ko
	
	printf("The array has the values of \n");
	for (int i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, *(a + i));
	
	printf("The list of prime numbers found in this array\n");
	
	for (int i = 0; i < size; i++ ) {
		result = isPrime(*(a + i)); //hoi tung a[i] may co nguyen to ko?
		//result 0 1
		
		if (result == 1)
			printf("a[%d] = %d\n", i, *(a + i));
	}
}
