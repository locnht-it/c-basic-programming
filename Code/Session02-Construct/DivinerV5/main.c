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
	fL = toupper(fL); //choi so sanh chu HOA, $, ~  
				
	if (fL == 'A')
		printf("-Du`a co*.t ko pha?i la` so*? tr*o*`ng cu?a ba.n...\n");
	//else //nguoc lai Aa se la ko la Aa,hay noi thang la BbCcDd$...
		   //trong dam else nay co ca BbCcDd..., minh lai chan 
		   //if tiep vi co qua nhieu ki tu trong ELSE
		   //SURE KO PHAI LA Aa, con qua nhieu ki tu
	else 
	{
		//fL = BbCcDc... ~@#$...
		if (fL == 'B') //hoi hep hon, biet may khac Aa roi
					   //nhung co phai la Bb hem???				
			printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");
		//nguoc lai cua ko bang Bb se la gi
		else	//fL = ko phai AaBb
				//fL = CcDdEeFf~!@#$%
		{
			//hem nay CcDdEeFf~!@#$%, hoi them co phai may la Cc hem?
			if (fL == 'C')
				printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");
			else
				//fL hieu la gi??? fL = loai tru ABCabc
				printf("Coming soon...\n");	
		}
	}
	
	return 0;
}
