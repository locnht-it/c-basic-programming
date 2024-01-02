#include <stdio.h>
#include <stdlib.h>

//Tinh tong cua day so 1 + 2 + 3 + ... + 100
//Tinh tong tu 1 -> 100
//IPO

//I: eo can dau vao, vi ro ca roi; cai can thiet de ta bat dau xu li.
//bao nhieu dau vao bay nhieu bien

//P: xu li dau vao de co dau ra
//co the xai bien trung gian
//vd: delta, giong giay nhap de lam cac thao tac tinh toan truoc khi ra ket qua cuoi cung

//O: ket qua chung cuoc, dua vao thi nhan ve gi/dau ra
//   tong: con so nao do duoc tinh ra 
//dau ra: bien chua value nhu la cai ket xuat
//		  la cau thong bao gi do, gi do ve gia tri -> bien -> value

//P: tinh tong 1 + 2 + 3 + 4 + ... + 99 + 100

//tong: 0; //ban dau chua co gi, tong la 0
//1 + 2 + 3 + 4 + 5 + 6 + ... + 98 + 99 + 100
// t3	+ 3
//		t6	+ 4
//			t10	+ 5
//				t15	+ 6
//					...
//										 + 100 -> vao tong

//lap lai phep cong de t tang dan len
//dua so, tao cong, tao nho cai tong dang co
//dua so moi, tao cong vao tong, nho tong
//dua so moi, tao cong vao tong, nho tong
//dua so moi. tao cong vao tong, nho tong

//lap lai viec cong va dua vao tong!!!

// 0 + 1 + 2 + 3 + 4 + 5 + 6 + ... + 98 + 99 + 100
//t0 + 1
//	 t1	 + 2
//		t3	 + 3
//			t6	 + 4
//				t10	 + 5
//					t15	  + 6

//tong = tong + 1 2 3 4 5 6 ...
//					tu tu di vao nhen
//tong = tong + i (i: 1 -> 100)

//tong = 0;
//tong = tong + 1 => 1;
//tong = tong + 2 => 1 + 2 = 3;
//tong = tong + 3 => 3 + 3 = 6;

//tong += i; //chot deal
//i cu tang tu tu, tong cung se tang, nhoi lien tuc lien tuc do for nhoi/tan cong
//oc buou/bu/don thit, nhoi tien vao con heo dat/dau hu nhoi thit

//for (bien dem, dep nhat la tang dan len ++)

//INT TONG = 0; //CUC KI QUAN TRONG!!!
//for (i 1 -> 100; i++)
//	tong = tong + i;

//meo: 1 + 2 + 3 + 4 + ... + 99 + 100
//	   cong dau duoi va nhan so cap
//ko lam duoc voi day lon xon

int main(int argc, char *argv[]) {
	
	//int sum = 0; //VIP quan trong, neu ko se lay rac cong tiep la toang!!!
	int acc = 0; //accumulation - tich luy, gom gop, cong don
	
	printf("This program will show the sum of 100 first integers (1..100)\n");
	
	for (int i = 1; i <= 100; i++)
		acc += i; //5050
		
	printf("The sum is %d\n", acc);
	
	return 0;
}
