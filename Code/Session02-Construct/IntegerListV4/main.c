#include <stdio.h>
#include <stdlib.h>

//In ra cac so tu nhien tu 1..n (n > 1)
//IPO
//I: can n truoc da, tuc la phai co n truoc da
//	 1 bien n

//P: ko so luon for va if neu can, mien for den dau, den n

//O: qua quen cho bai 1..1000, so le chan choi roi

int main(int argc, char *argv[]) {
	
	int n;
	printf("I am here to show the list of numbers from 1 to n (>1)\n");
	printf("Please input n > 1: ");
	scanf("%d", &n); //n = 100, bai cu, 50, 1000, 2000,...
	
	if (n <= 1)
		printf("Do you know how to input a number > 1?\n");
	else
	{
		printf("Again, the list of numbers from 1 to %d:\n", n);
		printf("Ahihi lack of {}\n");
		for (int i = 1; i <= n; i++)
			printf("%d ", i);
	}
			
	

	return 0;
}
