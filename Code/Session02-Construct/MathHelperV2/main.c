#include <stdio.h>
#include <stdlib.h>

//Viet app ho tro be lam phep toan co ban
//app cung cap tinh nang menu, 1 2 3 4 5 6 ... 10 Quit
//ai muon choi tinh nang nao, chon con so do
//1. Tinh dien tich hinh tron	    IPO (r -> area)
//2. Tinh dien tich hinh chu nhat	IPO (w, l -> area)
//3. Tinh...						IPO
//10. Quit

//IPO cua ca bai...
//can gi bai menu nay tong quat???
//Input: cho tao cai lua chon cua may, may chon may???
//		 bien choice/option/menuItem;

//Process: xu li, tuy choice la gi thi ta hanh xu tuong ung menu
//		   co nhieu choice 1 2 3 4 5... -> switch case/if else

//Output: tuy chon gi thi co output tuong ung


int main(int argc, char *argv[]) {
	
	int choice;
	float radius, area;
	
	do
	{
		printf("Welcome to Math Helper Program\n");
		printf("Please choose the following functions to play with\n");
		printf("1. Compute the disk area\n");
		printf("2. Compute the rectangle area\n");
		printf("3. Compute the triangle area\n");
		printf("4. Quit\n");
		
		printf("Choose 1...4: ");
		scanf("%d", &choice);
		
		switch (choice)
		{
			case 1:
				printf("You choose 1 to compute the disk area\n");
				printf("Please input a disk's radius: "); //go ban kinh am!!! (*)
				scanf("%f", &radius);
				area = 3.14 * radius * radius;
				printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
				break;
			
			case 2:
				break;
			case 3:
				break;
			case 4:
				printf("Bye bye, see you next time\n");
				break;
			default: //may go 5 6 7 8 -1 0 -2... chui
				printf("Please choose 1...4\n");
		}
			
	} while (choice != 4); //chung nao con chua chon 4, thi an/choi tiep di may
						   //dung la choice chua bang 4, thi choi tiep trong do
						   

	
	return 0;
}
