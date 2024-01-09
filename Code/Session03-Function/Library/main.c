#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	//tui muon lay can bac 2 cua 100 -> coi co duoc 10 ko?
	//double  sqrt(double x) 
	//int 	   get(int    n)
	//y    =     f(x)
	//double r = sqrt(100); //chay roi day, oi san 100 roi, ko them in dau
	printf("Ca(n ba^.c 2 cu?a %d = %.lf\n", 100, sqrt(100));
	//										   ham tra ve value!!!
	
	//Bai co ban re-use: tinh tong can 9 + can 25 + can 64
	double sum = sqrt(9) + sqrt(25) + sqrt(64); //3 + 5 + 8 = 16
	printf("Sum of ca(n: %.lf\n", sum);
	
	//Tinh tri tuyet doi -5 -> la 5
	//int r = abs(-5);
	printf("Tri. tuye^.t -do^'i cu?a %d is %d\n", -500, abs(-500));
	
	return 0;
}
