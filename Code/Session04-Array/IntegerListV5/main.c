#include <stdio.h>
#include <stdlib.h>

//Nhap tu ban phim mang 10 so nguyen bat ki. Hoi rang con so 10 co xuat hien trong mang ko

int main(int argc, char *argv[]) {
	
	int n[10];
	int pos = -1; //bien nay dong vai tro bien flag
				  //va luu vi tri tim thay luon
				  //-1 de hieu rang 10 eo tim thay
				  //10 tim thay no bat dau thay o vi tri mang
				  //0..9
				  //neu pos >= 0..9 nghia la thay may 10 roi
				  //ko thay, van -1
				  
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1)); //lua dao so thu tu voi user
		scanf("%d", &n[i]); // &n[i] ~~~ int yob &yob
	}
	
	//in mang
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", n[i]);
		
	printf("\n"); //in mang xong phai xuong hang	
	//tim so 10 co xuat hien ko
	for (int i = 0; i < 10; i++) 
		if (n[i] == 10) {
			pos = i; //pos luu vi tri tu 0..9 neu thay, co phat luon
			break;   //pos dong 2 vai luon
		}
	
	//ngoai for roi
	if (pos == -1)
		printf("10 not found\n");
	else 
		printf("10 found at the position of %d\n", (pos + 1));
	 
	
	return 0;
}
