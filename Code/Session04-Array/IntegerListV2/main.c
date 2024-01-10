#include <stdio.h>
#include <stdlib.h>

//Nhap 1 mang 10 con so tu ban phim. Kiem tra xem so 10
//co xuat hien trong mang hay ko
//IPO
//I: 10 bien
//P: loi tung bien ra hoi value == 10 ko, co thi ket luan
//O: in ra co hay ko

int main(int argc, char *argv[]) {
	int a[] = {1, 6, -1000, 100, 50, 70, 6, 6, -1, 100};
	//nen nho, ta co 10 bien int do heng a[0] a[1]...
	//						 binh dang moi bien int khac int yob;
	//duyet mang, quet tu dau den cuoi mang
	for (int i = 0; i < 10; i++){
		if (a[i] == 10) {
			printf("Hey, found 10 at position of %d\n", i);
			break;
		}
		else 
			printf("Not found 10\n");	
	} //LOGIC: LAM SAO IN DUOC 1 CAU KO THAY, KO IN NHIEU CAU!!!
	//KHI NAO DUOC QUYEN KET LUAN KO THAY!!!
	//SO SANH HET ROI, MA VAN KO THAY == 10 THI MOI DC KET LUAN
	//TIM BANG CHUNG MOI DAM KET LUAN
	//BIEN CO - FLAG NGUYEN TAC SUY DOAN VO TOI
	//gia bo rang 10 KO xuat hien tu dau tien
	//di hoi phan tu 1, may co == 10 ko, da em ko, GIA BO DANG DUNG
	//di hoi phan tu 2, may co == 10 ko, da em ko,...
	//di hoi phan tu i, may co == 10 ko, da em co, CHET ME MAY
	//CO PHAT LEN, KO HOI NUA!!! BREAK, TIM THAY ROI HOI TIEP LAM GI???
	//QUY UOC: CO = 0: KO TIM THAY
	//		   CO = 1: TIM THAY EM 10
	//KI THUAT DAT CO CHOI VOI NHIEU DU LIEU
	//TA GIA DINH 1 DIEU GI DO TU BAN DAU
	//SE PHAT KHI DATA CO DIEU GI DAC BIET!!!
	
	
	return 0;
}
