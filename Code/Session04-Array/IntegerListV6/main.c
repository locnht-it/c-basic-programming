#include <stdio.h>
#include <stdlib.h>

//Nhap tu ban phim mang 10 so nguyen bat ki. 
//Hoi rang co bao nhieu so chan
//tinh tong cac so le

//5 10 15 20 25 30 35 40
//IPO:
//I: can mang
//P: duyet mang, [i] may chan ko? da em ko, ke me may
//										co, count++
//										co, sum = sum + [i]
//											ta lay luon value nhoi vao!!!
//O: so con so chan, co may chan, count


int main(int argc, char *argv[]) {
	
	int n[10], evenCount = 0, sumOdd = 0; //VIP
	
				  
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1)); //lua dao so thu tu voi user
		scanf("%d", &n[i]); // &n[i] ~~~ int yob &yob
	}
	
	//in mang
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d\t", n[i]);
	
	printf("\n"); //xuong hang khi in mang xong	
	//quet mang, cung luc lam nhieu viec, dem so chan, tinh tong le, ...
	//moi lan quet mang, la ta co value bien [i]
	//ta co quyen lam gi voi value [i] bien [i] nay ma
	for (int i = 0; i < 10; i++) {
		//hoi tung [i] mot coi may la gi
		if (n[i] % 2 == 0)
			evenCount++; //gap 1 thang chan ++ lien
		else
			sumOdd += n[i]; //gap thang le, + luon value thang le
	}						//nhoi heo dat
	
	
	printf("There is/are %d even number(s) in this array\n", evenCount);
	printf("The sum of odd number(s) in this array is: %d\n", sumOdd);		
	
	return 0;
}
