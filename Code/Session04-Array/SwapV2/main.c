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
	int t; //tmp, temp, temporary
		   //bien trung gian luu/backup 1 gia tri nao do
	printf("Before swapping, tao: %d; ma`y: %d\n", tao, may);
	
	t = tao;   //cat 23 di truoc khi bi mat
	tao = may; //tao lay tien cua may. Tien cu cua tao cat vao t roi
	may = t;   //may lay tien cu cua tao o trong t
	
	printf("After swapping, tao: %d; ma`y: %d\n", tao, may);
	
	return 0;
}
