#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int tt = 5000;
	int td = 4000;
	int* hari; //chua tro ai ca, tam tia tu tu!!!
	
	printf("1st, TT has %d; TD has %d\n", tt, td);
	printf("1st, vi' TT is at %u; vi' TD is at %u\n", &tt, &td);
	//2 vi la sat nhau, hang xom, vung RAM TD 68-69-70-71
	//									   TT 72-73-74-75
	hari = &td; //hari tro vi td
	//hoi td co bao nhieu
	printf("1st, Hari said, TD now has %d\n", td);
	printf("1st, Hari said, TD now has %d\n", *hari); //4K
	
	//tui muon, Hari lay vi tt, vay lam sao?
	//hari = &tt; //qua quen, hok them lam
	
	hari++;	//tui la danh ba, ++ tui nghia la di sang can nha ke, dia chi
	//tui la hop luu so nha, so nha ++ nghia la di sang ke 1 can!!!
	
	//Hari oi, nha em dang tro co gi, bao nhieu tien
	printf("2nd, Hari said, ai -do' now has %d\n", *hari);
	
	//++ nhung la +4, vi 1 bien int chua 4 byte
	//tui dang tro toa do 68, 68++ ko la 69, nhay coc 1 can
	
	(*hari)++;	//vao vung RAM tt, tang value len 1 -> 5K + 1
	++(*hari);	//++ -- cua bien binh thuong
	printf("TT now has %d\n", tt);
	
	printf("3rd, Hari points to %u\n", hari); //hoi hari co gi, em co vi
	hari--;
	printf("4th, after -- Hari points to %u\n", hari); 
	return 0;
}
