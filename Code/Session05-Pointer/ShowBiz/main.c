#include <stdio.h>
#include <stdlib.h>

//Tran Thanh va Hariwon di Mi, TT noi Hr xai tien cua TT
//TT dem 5k di Mi

int main(int argc, char *argv[]) {
	
	int tt = 5000; //TT co 5K$ tranThanh tT
	//gia bo TT mua tui LV het 1000$, hoi TT con bao nhieu
	//tt = 4000; //cau sai!!!, ko noi rang da tieu 1K, con lai 4K
	tt -= 1000; //tang giam tu than
	printf("After buying LV, TT now has: %d$\n", tt);
	
	//Hari ko dem vi, TT bao rang anh se lo cho co!!!
	//int hari = 300;
	
	//int* hari = can lam luon 1 dia chi cua bien nao do/toa do ram;
	int* hari = &tt; //TT oi vi anh de o dau chi cho em voi
					 //vi anh o cai mong, em co the lay
					 //&toa do bien, luu lai toa do
					 //hari cam trong tay toa do vi, dia chi vi, vi tri vi
	
	//mot loai hop moi me, chua value moi me!!!
	//ko phai value thuong
	//hop danh ba, chuyen di luu toa do, danh ba, dia chi
	//value trong hop la so dien thoai, dia chi nha, so lien lac toi ai do
	
	//kiem tra xem co dung Hari dang cam trong tay vi TT ko
	printf("Vi' TT is at  %u\n", &tt); //in dia chi toa do %u
	
	//Hari oi, tay em cham vi chua
	printf("Hari has in hand %u\n", hari);
	
	//Hari oi, TT co bao nhieu tien??? vi Hari dang cam vi
	printf("Hari said, 'TT now has %d'\n", *hari);// xua qua tt);
	//co danh ba roi, hari co trong tay toa do, vi tri vi roi
	//chay den cho do mo ra xem
	//biet duoc dia chi hop thu, chay den dia chi do lay qua
	//biet duoc so thang ban, boc may goi no, gap no
	//co duoc vi tri vi, den so vi hoy!!!
	
	//hari = toa do vi
	//*hari den vi, so vi, so vung ram chua value that!!!
	//*hari ~~~ bien tt vi cham vung ram tt
	//lay duoc value cua vung ram tt
	//co quyen sua vung ram, vi so bien la lay dc value va sua dc value
	
	//Hari mua do may 3000$
	*hari -= 3000; //Hari dang so vi va giam tien, giong TT tieu xai
	
	//Hoi TT con bao nhieu???
	printf("Hari said, after Dior, 'TT now has %d$'\n", *hari);
	printf("TT said after Dior by Hari, 'TT now has %d$'\n", tt);

	//may cho tao di chi int* hari = &tt; tao se den don nha may ngay nao do
	//						*hari tuong duong bien goc tt
	//sua bien 1 cach gian tiep
	//tt bi sua qua bien khac, ko phai tt -- ++
	//hari tro vi/toa do tt
	//point/pointer
	
	return 0;
}
