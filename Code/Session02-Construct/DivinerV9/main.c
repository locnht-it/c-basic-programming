#include <stdio.h>
#include <stdlib.h>	

int main(int argc, char *argv[]) {
	

	char fL; 
	printf("Welcome to ACER diviner.\n");
	printf("You are required to input the 1st letter in your first name. \n");
	printf("Then I will show you your destiny/fate.\n");
	printf("Input your char: ");
	
	//THU ROI RAC
/*	int n = 3;
	switch(n)
	{
		case 3:
			printf("Ahuhu, case ngon!!!\n");
			break;
	}
*/
	
	scanf("%c", &fL);	//ke me, ko care hoa thuong, !@#$

	switch (fL) 
	{
		case 'A':			
		case 'a':
			printf("-Du`a co*.t ko pha?i la` so*? tr*o*`ng cu?a ba.n...\n");
			break;
			
		case 'B':			
		case 'b':
			printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");		
			break;
			
		case 'C':		
		case 'c':
			printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");
			break;
			
		case 'D':			
		case 'd':
			printf("Ti`nh ca?m cu?a ba.n no^`ng na`n, ma~nh lie^.t...\n");
			break;			
		default:
			printf("Coming soon...\n");
	}
	
	/*			
	if (fL == 'A')
		printf("-Du`a co*.t ko pha?i la` so*? tr*o*`ng cu?a ba.n...\n");
	else if (fL == 'B') 
		printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");		
	else if (fL == 'C')
		printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");
	else
		printf("Coming soon...\n");	
	*/
		
	return 0;
}
