#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14; //bien toan cuc, global variable
					   //em de dai, ai cung so duoc em

//Tu duy viet ham cho bai MathHelper
//IPO
//I: choice : ban chon gi thi to moi tinh tiep duoc 
void printMenu();

void computeDiskArea();

int main(int argc, char *argv[]) {
	
	int choice; //su lua chon option	
	
	//CHUA BANG 5 THI KO CHO THOAT
	do {
		printMenu();
		printf("Choose 1..5: ");
		scanf("%d", &choice);
	
		switch (choice) //if choice la may thi lam gi?
		{
			case 1:
				computeDiskArea();
				break;
			case 2:
				printf("You choose to compute the rectangle area\n");
				break;
			case 3:
				printf("You choose to compute the triangle area\n");
				break;
			case 4:
				printf("You choose to compute the ... area\n");
				break;
			case 5:
				printf("Bye bye. See you next time\n");
				break;
		}
		
	} while (choice != 5); //chua chon 5 ha, lam tiep di, in menu
						   //va moi goi
	
	return 0;
}

void printMenu() {
	printf("\n*=============================================*\n");
	printf("* Welcome to Math Helper program              *\n");
	printf("* Choose the following functions to play with:*\n");
	printf("* 1. Compute the disk area                    *\n");
	printf("* 2. Compute the rectangle area               *\n");
	printf("* 3. Compute the triangle area                *\n");
	printf("* 4. Compute the ... area                     *\n");
	//...
	printf("* 5. Quit                                     *\n");
}

void computeDiskArea() {
	float radius; //, area; ko can bien trung gian area nua!!!
	printf("You choose to compute the disk area\n");
	printf("Please input a radius (>0): ");
	scanf("%f", &radius);
	//area = 3.14 * radius * radius;
	//area = 3.14 * pow(radius, 2);
	//area = PI * pow(radius, 2);
	//printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
	printf("The disk with r = %.2f has the area of %.2f\n", radius, (PI * pow(radius, 2)));		
}
