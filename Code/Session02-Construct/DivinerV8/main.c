#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>	

int main(int argc, char *argv[]) {
	

	char fL; 
	printf("Welcome to ACER diviner.\n");
	printf("You are required to input the 1st letter in your first name. \n");
	printf("Then I will show you your destiny/fate.\n");
	printf("Input your char: ");
	
	scanf("%c", &fL);	
	fL = toupper(fL); 
	//if thay bang switch
	switch (fL) 
	{
		case 'A':
			printf("-Du`a co*.t ko pha?i la` so*? tr*o*`ng cu?a ba.n...\n");
			break;
		case 'B':
			printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");		
			break;
		case 'C':
			printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");
			break;
		case 'D':
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
