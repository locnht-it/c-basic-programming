#include <stdio.h>
#include <stdlib.h>

//tao co 2 trieu 3 VND
//may co 100$
//chung minh doi tien cho nhau de tieu xai
//tao dua may, may dua tao!!! hoan doi value
//tao = may; may dua tao day
//may = tao; tao dua may day

int main(int argc, char *argv[]) {
	
	int tao = 23;
	int may = 100;
	printf("Before swapping, tao: %d; ma`y: %d\n", tao, may);
	
	//may dua tao, gan gia tri cho nhau
	tao = may; //cau nay on!!! tao = may = 100; tao lay 100 dung
	//tao se dua may
	may = tao; //may = tao, tao dang 100, 2 dua 100
		  //bang TIEN CU 23 CUA TAO, BACKUP LAI TIEN CU CUA TAO
		  //TRUOC KHI TAO CAM 100 CUA MAY
		  //MAY LAY VALUE CU!!!
	printf("After swapping, tao: %d; ma`y: %d\n", tao, may);
	
	return 0;
}
