#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//1. 5 > 6 dung ko?
	int result = 5 > 6;
	printf("5 > 6? %d\n", result);	//noooo, 0
	
	//2. 5 < 6 dung ko?
    result = 5 < 6;	//yes,	1
	printf("5 < 6? %d\n", result);
	
	//3. 6 > 6 dung hem?
	result = 6 > 6;	//no, 0
	printf("6 > 6? %d\n", result);
	
	//4. 6 >= 6 dung ko?
	result = 6 >= 6; //yes, 1
	printf("6 >= 6? %d\n", result);
	
	//5. 100 bang 8 dung ko?
	result = 100 == 8; //no, 0
	printf("100 = 8? %d\n", result);
	
	//6. 100 bang 100 dung ko?
	result = 100 == 100; //yes, 1
	printf("100 = 100? %d\n", result);
	
	//7. 100 khac 100 dung hay sai?
	result = 100 != 100; //no, 0
	printf("100 <> 100? %d\n", result);
	
	//8. Cho 2 so a = 10, b = 3. Hoi a lon hon b dung ko?
	int a = 10, b = 3;
	result = a > b;
	printf("a > b? %d\n", result);
	
	//9. Cho tuoi cua ban la con so nguyen nao do
	//Neu tuoi < 20 chao kid
	//Neu tuoi >= 20 chao nguoi truong thanh
	int age = 18;
	
	if (age >= 20)
		printf("Hey, cha`o nguoi truong tha`nh\n");
	if (age < 20)
		printf("Hey, rich kid!\n");
	
	return 0;
}
