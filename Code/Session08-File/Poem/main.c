#include <stdio.h>
#include <stdlib.h>

//Luu tru 1 bai tho tren dia cung - HDD - Hard Disk Drive   - co dien, cham
//									SSD - Solic State Drive - nhanh

//ta lam 2 ham void, tron ven trong ham cho gon gang de thi nghiem
//lam chuan thi ta phai co tham so ham de mang tinh linh hoat/reuse - ban sau
void writeAPoem(); //tao moi tap tin co data la bai tho, luu tren dia Ctrl - Save

void readAPoem(); //mo 1 bai tho san co tren dia, in ra man hinh - Ctrl - Open

int main(int argc, char *argv[]) {
	//writeAPoem();
	readAPoem();
	return 0;
}

void writeAPoem() {
	FILE* f = fopen("tu-ay.txt", "a"); //mo/tao 1 tap tin tren HDD/SSD
	
	fprintf(f, "Tu*` a^'y trong to^i bu*`ng code ga.o\n");
	fprintf(f, "Ma`n hi`nh ma`u -do? cu*'a con tim\n");
	fprintf(f, "Ho^`n to^i nga^.p tra`n do-for-if\n");
	fprintf(f, "Ra^'t nhi. pha^n va` ro^.n tie^'ng -do^-la\n");
	
	fclose(f); //dong tap tin lai
	printf("The poem is saved successfully\n");
}

void readAPoem() {
	FILE* f = fopen("tu-ay.txt", "r"); //em muon xem data tu dia
	char ch; //bien dung de doc tung chu trong bai tho
			 //doc den dau thi in den do!!!
	do {
		ch = fgetc(f); //ham doc tung ki tu tu tap tin, tra ve ki tu
					   //doc duoc
		printf("%c", ch);
	} while (ch != EOF); //End of File
	
	fclose(f);
}
