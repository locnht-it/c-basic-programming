#include <stdio.h>
#include <stdlib.h>

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
	scanf("%c", &fL);
	//co duoc ten roi day, chi 1 ki tu hoy
	//fl = 'A'...'Z', 'a'...'z', $, #, ~, ?...
	
	//coi A voi a deu la a noi chung, A noi chung dau co sao
	//ta chi can so sanh fL voi A la du, neu go a thuong,
	//thi ca convert thanh A hoa luon.
	
	if(fL >= 'a' && fL <= 'z') //co dung la ban nhap chu cai thuong hok
							   //dung la fL tu a ... z thuong hay ko
							   //thi convert thanh HOA
							   //dung thuong thi convert HOA
		fL -= 32;							   
	
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
