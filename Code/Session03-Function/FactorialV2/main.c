#include <stdio.h>
#include <stdlib.h>

//Viet ham tinh n!

int getFactorialV4(int n);	//soai ca, y = f(x) = x^2...
int getFactorialWrong(int n);

int main(int argc, char *argv[]) {
	
	//printf("0! = %d\n", getFactorialV4(0));
						//may la 1 value, xai luon, khoi can gan bien khac!!!
	//printf("6! = %d\n", getFactorialV4(6));
	getFactorialVWrong(5);
	return 0;
}

/*
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
*/
/*
int getFactorialV4(int n)
{
	int acc = 1; 
	
	//return 69; //thu cai choi!!! TOAN CON ME MINH ROI
			   //VUA VAO HAM CO GIA TRI LUON, KO CARE PHAN CON LAI
	
	if (n == 0 || n == 1)
		return 1; //biet ngay 0! = 1! = 1, thoat luon
	else //tam thoi chua chan vu n < 0
		 //coi nhu tam chap nhan n = 2 3 4 5 6 7 8 ...
	{
		for (int i = 2; i <= n; i++)
			acc *= i;
		//printf("%d! = %d\n", n, acc); //ko nen IN khi ham tra ve gia tri!!! 
		return acc;
	}
		
	printf("Cho anh ga^`n em the^m chu't nu*~a\n");
	//cau lenh nay CPU ko cham toi duoc, do da return o tren mat roi	
}
*/

int getFactorialV4(int n)
{
	int acc = 1; 
	
	if (n == 0 || n == 1)
		return 1; //biet ngay 0! = 1! = 1, thoat luon
	
	//chua chan n am!!!
	//BO ELSE LUON MOI NGAU!!!RETURN SOM BAO HAM SU LOAI TRU, THOAT LUON, PHAN CON LAI LA
	//ELSE ROI, KO CAN ELSE NUA
	
	for (int i = 2; i <= n; i++)
		acc *= i;
	//printf("%d! = %d\n", n, acc); //ko nen IN khi ham tra ve gia tri!!! 
	return acc;
}

int getFactorialVWrong(int n)
{
	int acc = 1; 
	
	if (n == 0 || n == 1)
		//return 1; //biet ngay 0! = 1! = 1, thoat luon
		acc = 1; //xu li, ko return som thi sao!!! thi phia sau van chay cho tinh huong
				 //n tu 2 tro di
	
	printf("CPU is still here, of n >= 2!!!\n");
	for (int i = 2; i <= n; i++)
		acc *= i;
	
	
	//printf("%d! = %d\n", n, acc); //ko nen IN khi ham tra ve gia tri!!! 
	return acc;
}

