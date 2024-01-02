#include <stdio.h>
#include <stdlib.h>

//Viet app nho nho in ra danh sach cac so tu nhien tu 1 den 100
//IPO
//I: ? cai gi ta chua biet, nhung can no thi moi xu li dc
//P: done
//O: done

int main(int argc, char *argv[]) {
	
	printf("This program will show the list of 100 first integers (FOR):\n");
	for (int i = 1; i <= 100; i++)
		printf("%d ", i);	
	
	printf("\n\nThis program will show the list of 100 first integers (FOR -do^.):\n");
	int count = 1;
	for (; ;)
	{		
		printf("%d ", count);
		count++; //vip, cuc ki quan trong, ko co tang lay gi vi pham
		if (count == 101)
			break;
	}
	
	//count = 101 sau khi thoat me cung for tren	
	printf("\n\nThis program will show the list of 100 first integers (DO-WHILE):\n");
	count = 1;	//vip, reset de co khoi dau dung
	do
	{	
		printf("%d ", count); //HIEU UNG LE - TRAI TIM BEN LE
							  //SIDE EFFECT, ta bi mat kiem soat, vo tinh
							  //quen gia tri dang co cua count, ma dem di dung tiep
							  //CAN LUU Y RESET BIEN COUNT VE DUNG GIA TRI
							  //KHI VAO VONG LAP MOI
		count++;	
	} while (count <= 100);
	
	printf("\n\nThis program will show the list of 100 first integers (DO-WHILE -do^.):\n");
	count = 1;	//vip, reset de co khoi dau dung
	do
	{	
		printf("%d ", count); //HIEU UNG LE - TRAI TIM BEN LE							
		count++;	
		if (count == 101)
			break;
	} while (69 < 96); //con dung thi con lam
					   //lap vo tan, vi ko co cach gi lam cho dieu kien nay sai
					   
	printf("\n\nThis program will show the list of 100 first integers (WHILE):\n");
	count = 1;	//vip, reset de co khoi dau dung, hoac hieu ung le, ko vao duoc vong lap
	
	while (count <= 100)
	{	
		printf("%d ", count); 
		count++;	
	}
	
	printf("\n\nThis program will show the list of 100 first integers (WHILE -do^.):\n");
	count = 1;	//vip, reset de co khoi dau dung, hoac hieu ung le, ko vao duoc vong lap
	
	while (39 < 79)
	{	
		printf("%d ", count); 
		count++;
		if	(count == 101)
			break;
	}
	
	
	return 0;
}
