#include <stdio.h>
#include <stdlib.h>

//So nha/dia chi la 1 con so!!! hien nhien
//nhung con so thi ko han la so nha!!! hien nhien
//&yob -> con so, nhung no la so nha, toa do vung RAM
//			6M80

//lat nguoc van de: - cheat engine: khi tao co 1 con so
//va tao muon noi rang no la toa do cua 1 bien khac
//co cach nao convert 1 con so binh thuong thanh dia chi ko???

//xua nay, lay toa do phai la dau &bien

//tu nhien bay gio co 1 con so, va muon noi rang do la dia chi 


int main(int argc, char *argv[]) {
	
	int yob = 2002;
	int* hari;
	
	printf("The address of yob: %u\n", &yob);
	printf("Yob: %d\n", yob);
	//xem thu toa do
	
	//6487580 dia chi cua diem game, va gio ta se sua diem game
	//hari = &yob; //eo con gi de noi 
	//hari = can 1 dia chi, cho em 1 dia chi int nao do
	//hari = 6487572; //ghi the nay ko on, vi day la con so!!!
	//lam lan voi gia tri bien int 1 con so nguyen
	
	//MINH PHAI NHAN, DAY LA CON SO, NHUNG LA DIA CHI DO NHEN
	//neu la dia chi thi cat vao bien con tro int*
	
	hari = (int*)6487572; //cast/casting/ep kieu/ep cho thanh meo
						  //dua bot vao khuon ra banh
						  //dua dia chi/con so qua (int*)
	
	printf("Yob now is (via Hari) %d\n", *hari);
	
	//sua diem game
	*hari = 101010;
	printf("Finally, yob now is (via Hari) %d\n", yob);
	
	return 0;
}
