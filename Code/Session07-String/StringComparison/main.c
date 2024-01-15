#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	
	//Viet code truc tiep trong main, ko tach ham
	//so sanh 2 chuoi xem 2 chuoi thang thua ra sao
	//muc tieu sau nay sap xep danh sach sinh vien theo ten
	//neu ten thu [i] > ten thu [j] thi doi ten cho nhau...
	
	//ten nguoi thi la mang char[]
	//so sanh 2 mang the nao, bat dau...
	
	char s1[50] = "Ahihi";
	char s2[50] = "Ahihi";
	//== la phep so sanh, ket qua tra ve phai la 0: sai; 1: true/dung
	
	int r = s1 == s2; //so sanh 2 ten xem sao
	
	printf("r1: %d\n", r); //moa, ko bang nhau, du 2 chuoi y chang
	//2 ten mang, tro 2 dia chi khac nhau, bang the nao duoc
	//CAM TUYET DOI XAI TEN MANG DEM DI SO SANH, SO SANH DIA CHI LAM MEO GI
	
	//xai ham thoi
	r = strcmp(s1, s2);
	printf("r2: %d\n", r); //sure chung may phai bang nhau vi cung Ahihi
						   //ham nhan vao 2 mang, tu for [i] de kiem tra
	//r = 0 phai hieu la: DAY LA HIEU CUA 2 PHAN TU MANG TRU NHAU
	//VA NEU TRU NHAU == 0 NGHIA LA 2 MANG BANG NHAU
	//so sanh nay co phan biet hoa thuong!!!
	
	//doi chuoi moi
	//s1 = "Ahihi";	//ten mang la dia chi/can dia chi, chu ko can chuoi
	//s2 = "AHihi";	//hoac gan luc khai bao, hoac la dung ham!!!
	strcpy(s1, "Ahihi");
	strcpy(s2, "AHihi");
	r = strcmp(s1, s2);
	printf("r3: %d\n", r); //1
	
	strcpy(s1, "Ahihi");
	strcpy(s2, "z");
	r = strcmp(s1, s2);
	printf("r4: %d\n", r); //-1
	
	strcpy(s1, "Ah1");
	strcpy(s2, "Ah");
	r = strcmp(s1, s2);
	printf("r5: %d\n", r); //1
	
	strcpy(s1, "Hello");
	strcpy(s2, "HELLO");
	
	r = strcmp(s1, s2);
	printf("r6 - case sensitive: %d\n", r); //1
	
	r = stricmp(s1, s2);
	printf("r7 - ignore case: %d\n", r); //0
	
	//if(strcmp(s1, s2) > 0) ham y s1 > s2
	//if(strcmp(s1, s2) == 1) ham y s1 > s2
	//tao lon hon may thi tra ve +1
	//		swap 2 ten cho nhau
	
	return 0;
}
