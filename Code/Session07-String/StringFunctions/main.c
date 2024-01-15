#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//ta viet ham y chang ham strcpy() cua thu vien <string.h>
//ban chat ham nay nhan vao 2 mang dest va src, do tung ki tu tu src -> dest
//vi ten mang/ten chuoi cung chinh la bien con tro kieu char*
//ta se luon thay ten cua cac ham xu lo chuoi thi luon ko dung []
//ma dung char* - 2 thu tuong duong - ta da hoc dau * xai [] va [] xai *

//ta do lai ham strcpy() theo cach cua ta, cung ket qua nhu nguoi ta

//void strcpyHandmade(char dest[50], char src[50]); //chua tu tin viet cach nay
												    //cam giac quen mang char/string

//void strcpyHandmade(char dest[], char src[]); //tu tin hon 1 chut, ko dung size
											  //cam giac quen mang/string

void strcpyHandmade(char* dest, char* src); //pro, giong thien ha
											//char* dest = ten mang nao do
											//			 = &dia chi thang dau day
											//			 = s2
											//dest nam cung dau mang s2
											//char s2[50]
											
											//src = s1
											//char s1[50] = "Ahihi";
											//src se tro dau mang s1 = &s1[0]
											
											//dest tro dau mang s2 can do value
											//src tro dau mang s1 dang co Ahihi
											//for tung thang loi ra, gan sang
											//tro, lam ban goc s2 bi thay doi
											//TRUYEN THAM CHIEU - PASS BY POINTER/PASS BY REFERENCE

//BAI DAC BIET - XOA 1 KI TU TRONG CHUOI
void removeChar(); //viet void thuan de cho gon trong 1 ham, de hieu bai truoc
				   //chuan: dua mang vao, dua ki tu muon xoa vao, vi tri xoa...
				   //kieu gi thi cung phai hoc thuat toan xoa

void removeCharV2(); //xoa tai 1 vi tri bat ki hop le
					 //goi la pos -> for don len tu pos ve cuoi chuoi

//BAI SIEU DAC BIET - XOA TAT CA KI TU LA TRONG CHUOI
void removeCharV3();

int main(int argc, char *argv[]) {
//	char s1[50] = "Don xin doi chuyen nganh";
//	char s2[50]; //ban doi minh cx doi
//	
//	//strcpy(s2, s1); //ham nha nguoi ta
//	strcpyHandmade(s2, s1); //ham nha minh tu trong, y chang
//	printf("s2 = ");
//	puts(s2);
	
	//removeChar();
	//removeCharV2();
	removeCharV3();
	return 0;
}

void strcpyHandmade(char* dest, char* src) {
						  //s2		  //s1 = Ahihi - ten mang la dau day/con tro
						  //can duoc gan
	//quet tu dau mang/chuoi den length, ko cuoi mang, vi chi can dung o NULL
	for (int i = 0; i <= strlen(src); i++)  //chuoi goc dai bao nhieu, for den do
		dest[i] = src[i]; //copy luon ca NULL dem xuong, de ket thuc chuoi	
	//xong ham
	//ben trong thay doi, ben ngoai ham main() bi anh huong
	//do dest va src dang tro cho XA XA GOI HAM!!!						  
}

void removeChar() {
	char s[50] = "123456789"; //tui muon xoa so 5
	//sau khi xoa thi chuoi SE PHAI CON LAI LA 12346789
	//chuoi dai 50 ko xai het, RAM van 50 byte do 
	//dung hieu ung domino, don value thang sau len thang truoc
	//bat dau tu cho muon xoa
	//truoc la [i], thang lien sau la [i + 1] de value vao thang truoc
	//chinh la don don len truoc!!! don value, don value, tem tem len truoc
	//so ghe van giu nguyen, doi nguoi/value tren ghe
	for (int i = 4; i < strlen(s); i++)
		s[i] = s[i + 1]; //xong, thang sau te len truoc, the cho thang truoc
						 //ko nhac ghem chi nhac mong
	
	printf("After removing a char: ");
	puts(s);					 
		//chuoi dai 9, thuc ra xai 10 cho NULL cuoi
		//for 0...8 du 9 ki tu roi	
		//			[8] = [9] = null, nul duoc day len luon
}

void removeCharV2() {
	char s[50] = "123456789"; 
	//int pos = 6; //xoa vi tri 6 tinh tu [0] (ngoai doi dem 7)
	int pos = 8; //CUOI MANG
	
	for (int i = pos; i < strlen(s); i++)
		s[i] = s[i + 1]; 
	
	printf("After removing a char: ");
	puts(s);					 
		
}

//tui muon xoa tat ca cac con so, chi giu lai ki tu
//if ([i] >= '0' && [i] <= '9') may bi xoa

//tui muon xoa tat ca nhung chu ko phai A-Z, a-z
//if (!(([i] >= 'A' && [i] <= 'Z') || ([i] >= 'a' && [i] <= 'z')))

//if (!(tolower([i]) >= 'a' && tolower([i]) <= 'z' ))
void removeCharV3() {
	char s[50] = "1%^&^%$$$%%B2*-/-/C3*-/-D4/-**/e";
	
	//ta can duyet qua toan bo tung cho ngoi trong mang, hoi tung thang
	//[i] may co xung dang bi xoa ko, co, thi xoa ngay -> 1 cai for XOA
	//duyet qua mang lap di lap lai hoi tung dua -> 1 cai for ngoai
	//de hoi tung dua
	
	//hoi tung dua, coi may xung dang bi duoi ko
	for (int i = 0; i < strlen(s); i++)
		if (!(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z')) {
			for (int j = i; j < strlen(s); j++)
				s[j] = s[j + 1];
			i--; //for j chay xong la doi xong
			//ra ngoai if la for ngoai tang i ngay, eo cho tang
		}
	
	printf("After removing all special chars: %s\n", s);
		
}
