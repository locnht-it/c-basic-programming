#include <stdio.h>
#include <stdlib.h>

//Viet doan code theo style ham tinh binh phuong cua 1 con so
//IPO
//I: 1 con so x
//P: x * x
//O: y = x * x

int fV4(int x); //100% tuong thich ham toan hoc y = f(x) = x^2
				//XAI: f(5) -> 25
//y	 f		x	//chi con thieu phan binh phuong thoi
				//lat hoi o duoi ta lam not

int getFactorialSum(int n);

int main(int argc, char *argv[]) {
	
	//xai ham co tra ve gia tri, van goi ten em
	//int result = fV4(5);
	//printf("result: %d\n", result);
	
	//printf("result: %d\n", fV4(10));
	
	//linh hoat value dau vao, thi phai nhap tu ban phim
	int n;
	printf("Input a number to get ^2: ");
	scanf("%d", &n);
	printf("result: %d\n", fV4(n));	//n duoc pass/chuyen cho ham
									//TRUYEN THAI Y!!!
	
	return 0;
}

int fV4(int x)
{
	//coi nhu x da co roi, quy uoc ham nhan vao x, cu gia bo x se co sau
	//cu xu li tren x tuong duong voi tuong lai se xu li tren value that
	//xu li tren cong thuc chinh la xu li tren value that sau nay
	//KHI XAI HAM THI PHAI DUA X VAO. Y CHANG XAI MAY XAY SINH TO PHAI DUA TRAI CAY,
	//GIA BO TRAI CAY CO ROI, TA LOI MAY XAI,
	//LOI MAY XAI, THI TRAI CAY PHAI CO.
	//CHI CO THANG NGAO THI MOI SCANF() O DAY
	
	//int y = x * x; //may dua x, tao binh phuong, nhan ket qua di
				  
	//return y;  //tao nem binh phuong ra
	
	return x * x; //can value de gan cho tem ham thoi ma
				  //2 bien, 2 con so nhan nhau, thi la 1 value int
	
}


