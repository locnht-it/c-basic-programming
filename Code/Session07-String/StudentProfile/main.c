#include <stdio.h>
#include <stdlib.h>
#include <string.h> //kho do choi, noi chua ham lien quan chuoi
					//y = f(x) = x^2

void storeName(); //luu ten theo kieu mang ki tu khai bao {'S', 'O'}
				  //phai chu dong chen NULL \0 cuoi chuoi
void storeNameV2(); //khai bao chuoi theo kieu gon "Ahihi" tu chen NULL cuoi chuoi

void storeNameV3(); //doi ten tu thuong sang hoa

void storeNameV4(); //doi thuong sang hoa, chi doi A-Z a-z
					//doi dau cham lam gi???
					
void storeNameV5(); //doi thuong sang hoa xai tool/do choi					

void storeNameV6(); //nhap ten nguoi/chuoi tu ban phim
					//%s hok them lay ten sau dau cach dau tien
					
void storeNameV7(); //lay luon chuoi co dau cach
					//hay xem enter nhu la phim duy nhat de ket thuc viec nhap
					//Dau cach la data thuong 
					//ko dung dau cach mac dinh de phan tach cac 
					//value trong qua trinh nhap

void storeNameV8(); //nhap chuoi bi lo thi sao, lo chieu dai thi sao

void storeNameV9(); //nhap chuoi co chan do dai, chap nhan dau cach

void storeNameV10(); //nhap chuoi ko chan do dai, de viet hon!!!

void storeNameV11(); //gan gia tri cho mang/chuoi the nao???

int main(int argc, char *argv[]) {
	
	//storeName();
	//storeNameV2();
	//storeNameV3();
	//storeNameV4();
	//storeNameV5();
	//storeNameV6();
	//storeNameV7();
	//storeNameV8();
	//storeNameV9();
	//storeNameV10();
	storeNameV11();
	
	
	return 0;
}

void storeName() {
	
	int     a[] = {2, 4, 6, 8, 10};
	
	//char name[] = {'S', 'O', 'S', '\0', '$', '#'};
	char name[] = {65, 'O', 'S', 0, '$', '#'};
	//ki tu duoc quyen xai theo 2 cach: ma ASCII hoac ban than ki tu
	//ki tu nhay don, ma ASCII la con so nguyen
	
	//ham xem do dai cua chuoi/ten ming strlen(dua chuoi vao) -> do dai
	int len = strlen(name);
	printf("The length of your name: %d\n", len);
	
	printf("Your name: %s\n", name);
	//%s quet chuoi/mang cho den khi gap NULL dung ngay!!!
	//bao hieu het chuoi roi, ko can di het mang
	
	//muon in phan sau null, thi xai for binh thuong
	//for binh thuong se quet qua tung phan tu mang
	
	printf("Your name (printed by using for)\n");
	for (int i = 0; i < 6; i++)
		printf("%c", name[i]);
}

void storeNameV2() {
	char name[50] = "E't-O-E't";
	//Khai bao chuoi nhanh hon, khoi can tung ki tu
	//nhay doi, 
	//C tu chen them ki tu null vao cuoi chuoi!!!
	printf("Your name: %s\n", name);
	printf("The length of your name: %d\n", strlen(name));
	
	//ta quet het mang coi co me gi??? %s chi di den null no dung
	//di den chu t no dung
	//quet het mang, thi phai %c
	printf("The full array of name:\n");
	for (int i = 0; i < 500; i++)
		printf("%c", name[i]);
}

void storeNameV3() {
	char name[50] = "ngo.huynh.tan.loc";
	
	//tui muon in ten tui thanh chu hoa, doi tung ki tu 
	//thanh hoa, da hoc dau ki roi, HOA cach thuong 32 
	//trong bang ma ASCII
	//loi tung ki tu ra ma doi
	printf("The name before upper case: %s\n", name);
	//%s tu di vao vung RAM cua name - name dang la con tro
	//ko thay dung dau *, %s tu di dung dau * cua name
	//printf("%c\n", name[2]);
	for (int i = 0; i < strlen(name); i++)
		name[i] = name[i] - 32; //thuong to hon hoa 32 trong ASCII
	printf("The name after upper case: %s\n", name);
	
}

void storeNameV4() {
	char name[50] = "ngo.huynh.tan.loc";

	printf("The name before upper case: %s\n", name);
	
	for (int i = 0; i < strlen(name); i++)
		if (name[i] >= 97 && name[i] <= 122)
			name[i] -= 32;
		//neu dung la may nam trong khoang thuong, moi doi
		
	printf("The name after upper case: %s\n", name);
}

void storeNameV5() {
	char name[50] = "ngo.huynh.tan.loc";
	
	printf("The name before upper case: %s\n", name);
	
	//truyen tham chieu, trong ham cua nguoi ta lam cai me gi ko biet,
	//the la mang name o ngoai ham bi anh huong
	//dua con tro vao ham, va ham lam gi, ben ngoai bi anh huong
	
	strupr(name);
	
	//strlwr(name) -> HOA sang thuong
	printf("The name after upper case: %s\n", name);
	
}

void storeNameV6() {
	char name[50];
	printf("Input your name: ");
	scanf("%s", name);
	printf("Hi, %s", name);
}

void storeNameV7() {
	char name[50];
	printf("Input your name: ");
	scanf("%[^\n]", name); //dua dia chi thang dau mang &name[0]
	//do luon 1 loat ki tu vao day bien san sat nhau
	//dua nha thang dau day, ki tu dau,
	//do ca dam bien lien nhau, an ke luon... do full luon
	
	printf("Hi, %s\n", name);
}

void storeNameV8() {
	int yob = 2002;
	char name[10];	//ten ngan de doi chieu cho de
	
	//xem dia chi ram
	printf("Yob = %d; yob addr: %u\n", yob, &yob);
	printf("name[0] addr: %u\n", name); //&name[0]
	
	printf("Input your name: ");
	scanf("%[^\n]", name);  //nhap ten va nhap lo 10 ki tu
							//anh huong bien sau!!!
							//chan do dai khi nhap!!!
						
	printf("Hi, %s\n", name);
	printf("Yob: %d\n", yob);
}

void storeNameV9() {
	int yob = 2002;
	char name[10];	//ten ngan de doi chieu cho de
	
	//xem dia chi ram
	printf("Yob = %d; yob addr: %u\n", yob, &yob);
	printf("name[0] addr: %u\n", name); //&name[0]
	
	printf("Input your name: ");
	scanf("%9[^\n]", name);  
						
	printf("Hi, %s\n", name);
	printf("Yob: %d\n", yob);
}

void storeNameV10() {
	char name[50];
	printf("Input your name: ");
	gets(name);
	puts(name); //ten mang chuoi dua vao - ONLY MANG/CHUOI
	printf("Your name is: %s\n", name);
}

void storeNameV11() {
	char n1[50] = "dongok"; //okie, gan ngay luc khai bao ko van de
	char n2[50] = {'A', 'h', 'i', 'h', 'i', 0}; //ket thuc ma ASCII NULL ne
	//OKIE NHIN VAT VA QUA
	char n3[50] = {'A', 'h', 'i', 'h', 'i', '\0'};
	//										KI TU NULL, EO CHOI MA
	//OKIE, VAT VA QUA
	
	char name[50] = "Ahihi"; //khai bao truoc, gan sau
	//name = "Ahihi"; //dau = chi dung luc khai bao, hoac gan 1 bien don!!!
	
	//name = n1; //co gang lay Ahihi o n1 gan vao name
	//ko cho vi 2 con tro do value cho nhau
	//neu la con tro thuan chung * thi okie
	//day la con tro ma mi, chot mang tu dau, ko cho tro cho khac
	//ta phai choi tro khac, dung do choi
	
	printf("Before\n");
	printf("n1: %s\n", n1);
	printf("name: %s\n", name);
	
	strcpy(name, n1);
	//vao mang n1 copy tung ki tu n1 do sang tuong ung name, copy luon ca null o cuoi chuoi	
	
	printf("After\n");
	printf("n1: %s\n", n1);
	printf("name: %s\n", name);	   
}
