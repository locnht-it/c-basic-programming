#include <stdio.h>
#include <stdlib.h>

//TT di Mi dem theo 5000$
//sau do anh dua vi cho Hari dung

//sau do ve VN, Hari co di uong cafe voi TD
//TD cung mua tang Hari mot tui H&M

int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	
	printf("1st, TT has %d; TD has %d\n", tt, td);
	printf("1st, vi' TT is at %u; vi' TD is at %u\n", &tt, &td);
	//2 vi la sat nhau, hang xom, vung RAM TD 68-69-70-71
	//									   TT 72-73-74-75
	
	int* hari = &tt;
	
	//hoi hari xem tt dang co bao nhieu
	printf("1st, Hari said, TT has %d\n", *hari); //tt 5000

	//Haro mua do het 4000
	*hari -= 4000;
	
	//Hoi lai tt con bao nhieu, hoi qua Hari cx okie, truc tiep tt cx okie
	
	printf("2st, Hari said, TT now has (after 4k) %d\n", *hari);
	printf("2st, TT said, TT now has (after 4k by Hari) %d\n", tt);
	
	//Hari xem vi TD, ta muon co danh ba moi, thay danh ba cu
	//gan gia tri moi cho bien con tro - la 1 bien gan = binh thuong
	//							CHI DUOC GAN = DIA CHI KHAC!!!
	hari = &td;	//DOI CHO TRO, TRO BIEN KHAC!!!
	
	printf("3rd, Hari said, TD now has %d\n", *hari); //4K
	*hari -= 2000; //tieu cua TD 2K
	//hoi TD con may
	printf("4th, TD said, TD now has (after Hari 2K) %d\n", td); //2K	
	return 0;
}
