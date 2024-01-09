#include <stdio.h>
#include <stdlib.h>

//Viet ham tinh n!
//IPO
//I: n
//P: 1.2.3.4...n -> nhoi heo dat, nhoi theo kieu nhan, ko phai cong
//O: ket qua nhan don!!!
//Chon ham loai may, vi co 4 loai
//Viet thu ca 4
void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n);	//soai ca, y = f(x) = x^2...

int main(int argc, char *argv[]) {
	
	//getFactorialV1();
	//getFactorialV2(6); //1.2.3.4.5.6 = 720
	//int result = getFactorialV3(); //ham oi ve value
								   //hung value de dung
	//printf("result: %d\n", result);
	//printf("result: %d\n", getFactorialV3());
							//may la value acc ngam trong do
							//in acc hien than qua ten ham!!!
	getFactorialV4(5); //ngam tra ve 120, eo them in
					   //neu in ko reuse duoc tot nhat!!!
	
	printf("result: %d\n", getFactorialV4(5));
	
	return 0;
}

void getFactorialV1()
{
	int n, acc = 1; //0 danh cho tong don; tich thi ban dau te nhat la 1
					//1 nhan voi ai cung ko anh huong ai do
	do
	{
		printf("Input a number (>= 0) to get the factorial: ");
		scanf("%d", &n); //co kha nang nhap ca chon!!! VALIDATION DA TUNG HOC
	} while(n < 0);
	
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tam thoi chua chan vu n < 0
		 //coi nhu tam chap nhan n = 2 3 4 5 6 7 8 ...
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	//return acc; //do ham ko return, thi phai in ra!!!
	printf("%d! = %d\n", n, acc); 
}

void getFactorialV2(int n)
{
	int acc = 1; //0 danh cho tong don; tich thi ban dau te nhat la 1
					//1 nhan voi ai cung ko anh huong ai do	
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tam thoi chua chan vu n < 0
		 //coi nhu tam chap nhan n = 2 3 4 5 6 7 8 ...
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	//return acc; //do ham ko return, thi phai in ra!!!
	printf("%d! = %d\n", n, acc); 
}

int getFactorialV3()
{
	int n, acc = 1; //0 danh cho tong don; tich thi ban dau te nhat la 1
					//1 nhan voi ai cung ko anh huong ai do
	do
	{
		printf("Input a number (>= 0) to get the factorial: ");
		scanf("%d", &n); //co kha nang nhap ca chon!!! VALIDATION DA TUNG HOC
	} while(n < 0);
	
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tam thoi chua chan vu n < 0
		 //coi nhu tam chap nhan n = 2 3 4 5 6 7 8 ...
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	//return acc; //do ham ko return, thi phai in ra!!!
	printf("%d! = %d\n", n, acc); //ko nen IN khi ham tra ve gia tri!!! 
	return acc;
}

int getFactorialV4(int n)
{
	int acc = 1; 
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tam thoi chua chan vu n < 0
		 //coi nhu tam chap nhan n = 2 3 4 5 6 7 8 ...
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	
	//printf("%d! = %d\n", n, acc); //ko nen IN khi ham tra ve gia tri!!! 
	return acc;
}
