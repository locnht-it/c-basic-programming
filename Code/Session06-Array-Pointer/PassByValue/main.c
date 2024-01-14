#include <stdio.h>
#include <stdlib.h>

//Viet ham y = f(x) = x^2
//ham lam nhiem vu BINH PHUONG DAU VAO!!!

void f(int x); //x la dau vao!!!

int main(int argc, char *argv[]) {
	
	int x = 10;
	
	printf("In main(), before calling f(), x is: %d\n", x); //10
	
	f(x); //CALLING/CALL/INVOKE/GOI HAM
	
	printf("In main(), after calling f(), x finally is: %d\n", x); //10
	
	return 0;
}

void f(int x) {
	printf("In f(), x before ^2 is: %d\n", x); //10
	
	x *= x; //gan tu than, tu tao tang len
	
	printf("In f(), x after ^2 is: %d\n", x); //100
	//sure x da bi doi trong ham!!!
}
