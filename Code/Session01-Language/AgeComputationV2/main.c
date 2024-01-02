#include <stdio.h>
#include <stdlib.h>

//printf("Hello");
/*... mot doan lenh bi phe vo cong*/

//viet app nho nho tinh tuoi cua ai do dua tren nam sinh
//nhap vao tu ban phim, sau do in ra tuoi
//cong thuc tinh tuoi: age = 2022 - nam sinh (lay nam hien hanh tu may tinh)
//x = 10;
//x = 5 + y;

int main(int argc, char *argv[]) {
	
	int yob, age;
	
	//thu nghiem
	printf("Your year of birth is %d\n", yob);
	//xin bien/xin dat/mua dat/declare a variable
	//ma ko gan value, thi vung ram co san nay truoc do co the co
	//on off cua app khac truoc do de lai, neu minh in value
	//thi ta se co gia tri vo van nao do, goi la GARBAGE VALUE
	//nguy hiem cho app vi app xu li sai...
	
	printf("Please input your yob: ");
	scanf("%d", yob);
	
	age = 2022 - yob;
	printf("As I guess, you are %d years old\n", age);
	
	return 0;
}
