#include <stdio.h>
#include <stdlib.h>

//nhap 1 mang tu ban phim, sau do in ra min max

int main(int argc, char *argv[]) {
	
	int a[10]; //ta co 10 bien ten la a[0] a[1]...
	int min, max;
	
	printf("Please input 10 numbers for find the min/max\n");
	for (int i = 0; i < 10; i++) {
		printf("Input number #%d: ", (i + 1));
								//moi nhap so thu #1 #2 #3
		scanf("%d", &a[i]);						
	}
	
	printf("You have just input the following numbers\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	
	min = a[0];
	max = a[0]; //gan ngay sau khi khai bao mang la an don
				//vi mang chua co value
	for (int i = 1; i < 10; i++) {
		if (a[i] > max)
			max = a[i];
			
		if (a[i] < min)
			min = a[i];
	}
	
	printf("\nThe min value of this array is %d\n", min);
	printf("The max value of this array is %d\n", max);
	
	return 0;
}
