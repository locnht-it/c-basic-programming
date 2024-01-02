#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, max;
	printf("Find max between three numbers\n");
	printf("Input three integers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	max = a; //co the dung, hoac sai khi noi max la a
			 //sai thi sua, phat flag, sua lai suy doan!!!
	if (b > max)
		max = b; //minh bi ngao, max phai la b
	
	if (c > max)
		max = c;
	
	printf("Max number between %d %d %d is %d\n", a, b, c, max);
	
	return 0;
}
