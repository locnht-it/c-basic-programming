#include <stdio.h>
#include <stdlib.h>

//Viet ham mo phong lai ham toan hoc y = f(x) = x^2
//Ham la quy tac xu li dau vao de co duoc 1 dau ra!!!

//Ham la cach dat ten cho 1 nhom cac cau lenh lien quan lam 1 viec gi do,
//nhung thu, nhung lenh phai lam va dat 1 cai ten
//Loi ich:
//- re-use: tai su dung, goi lai dung lai doan lenh nay chi qua ten goi
//- easy to maintain: de bao tri/sua code


void fV1();

void fV2(int x);

int main(int argc, char *argv[]) {
	
	//fV1();
	//fV1();
	
	//for (int i = 1; i <= 5; i++)
	//	fV1();
	
	fV2(5);
	fV2(-5); //hard-code dau vao, fix cung dau vao, muon linh hoat chua thay
	
	//fV2(to chi can 1 con so/value int o day thoi ma)
	//value do la value cung, hay value tu ban phim, deu la value
	int n;
	do
	{
		printf("Input an integer to get ^2: ");
		scanf("%d", &n);
	
		fV2(n);	
	} while (n != 0);
	
	
	return 0;
}

void fV1() //ham loai 1 - ko vao ko ra
{
	//Quy tac xu li ben trong ham. Xu li vao, de co cai ra
	//IPO duoc nhet hoan toan trong ham!!!
	int x, y;
	
	printf("Please input an integer to get ^2: ");
	scanf("%d", &x); //I
	
	y = x * x;		 //P
	
	printf("y = f(x) = x^2; f(%d) = %d\n", x, y);	
}

void fV2(int x)
{
	//CHI CO THANG NGAO MOI LAM LENH SCANF(X) O DAY
	//VI LENH O DAY CHINH LA CONG THUC TINH TOAN GIA TRI DAU VAO
	//nen ta phai xem nhu dau vao da biet roi
	//no la con so nao do se noi sau, nhung duoc goi tam la x,
	//noi cach khac x la 1 gia tri nao do duoc dua vao!!!
	//ko can scanf(), vi lat hoi xai ham, giong toan
	//thay/dua value vao cho x o cho dau ()
	//f(5) ~ toan hoc, thi lap trinh se la fV2(5)
	//ta ko khai bao bien x nhu V1, x co o nga dau vao tu ten ham!!!
	int y = x * x;
	printf("y = f(x) = x^2; f(%d) = %d\n", x, y);
}
