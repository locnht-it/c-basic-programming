#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>	//mo cop xe Innova, lay con nhi khuc ra choi
					//cai hom chua do choi dung nhieu lan
					//day la tap tin tren HDD/SDD chua cac ham
					//cac xu li co san ma ta loi ra xai
					//ta can biet hom nao chua do gi
					//ten hom.h ~~~ cac cop xe chua do choi
					//ten mon do choi la cac ham nam trong cop xe
					//ctype.h, string.h, math.h, ...h 
					//cac hom.h phan loai cac do choi/cac ham tuong ung
					//~~~ cac cop xe chua cac loai hang khac nhau
					//include <> mo cop xe tuong ung
					//da mo thi lay hang/ham ra ma xai!!!
					//.h duoc goi la LIBRARY - THU VIEN/NOI CHUA 
					//NHIEU DO CHOI DUNG CHUNG, XAI LAI NHIEU LAN

//Viet app nho nho in ra tinh cach cua ban dua theo ten goi
//dung ki tu dau trong ten goi de luan ra tinh cach

//ap dung cong thuc IPO
//de boi duoc tinh cach, lam duoc bai nay, ta can gi?
//INPUT: ki tu dau trong ten!!!

//PROCESS: tuy ki tu ten la gì, A, B, C, D, E thi ta
//		   se in/ghep voi tinh cach da duoc tong ket san boi nhan loai
//if (chu cai la A) thi tinh cach la...
//if (chu cai ten dung la B) thi tinh cach la...
			
//OUTPUT: in ra tinh cach tuong ung - printf("cau gi do");

//TIPS: cu co bao nhieu input, ta can bay nhieu bien!!!

//		cu co output, thi se co xac suat can them bien de luu output
//		tru truong hop output la in cau gi do, ko can bien.
//		Vd: output cua nghiem pt bac 2: 2 nghiem can in ra x1, x2

//		phan thuat toan xu li/process, co kha nang can them bien 
//		trung gian de luu cac gia tri trong qua trinh tinh toan.
//		Vd: in tuoi theo nam sinh, age = 2022 - yob;
//								bien trung gian
//		bai giai pt bac 2, delta = b^2 - 4ac no la trung gian
//		output thuc su can cua pt bac 2 la x1, x2

int main(int argc, char *argv[]) {
	
	//input: chu cai dau trong ten goi
	char fL; //firstLetter - camel case notation
	//process: co ten thi if tuong ung va in ra
	//output: chi in ra ket qua, ko can bien
	
	//co bien thi can value: hoac gan ngay - hard-code, hoac nhap tu ban phim
	printf("Welcome to ACER diviner.\n");
	printf("You are required to input the 1st letter in your first name. \n");
	printf("Then I will show you your destiny/fate.\n");
	printf("Input your char: ");
	
	scanf("%c", &fL);	//neu go HOA, okie, ko care if tiep in ket qua							   
						//neu go thuong, thi doi HOA da, if nhu binh thuong
						//if (thuong) - 32 ve HOA
	fL = toupper(fL);   //y = f(x) = x^2
						//y = f(2) = 2^2 = 4, ham/ham so/function/f
						//la quy tac bien doi cai me j do, x
						//ra duoc cai gi moi!!!, may dua 2, nhan ve 4
						//y = f(-5) = (-5)^2 = 25
						//may dua -5, nhan ve 25
	//y =	f	(x)
				
	if (fL == 'A')
		printf("-Du`a co*.t ko pha?i la` so*? tr*o*`ng cu?a ba.n...\n");
		
	if (fL == 'B')
		printf("Ba?n na(ng gio*'i ti'nh ra^'t tu*. nhie^n...\n");
		
	if (fL == 'C')
		printf("Ti`nh ca?m cu?a ba.n ga^`n gu~i, tha^n ma^.t...\n");	
	
	//else la nguoc lai cua if ngay sat no
	
	
	//CODE CHAY SAI NEU GO a thuong, ko in ra tinh cach
	//loi do ta chi hoi/xet chu A, A khac a ve mat ONOFF, ma ASCII
	
	return 0;
}
