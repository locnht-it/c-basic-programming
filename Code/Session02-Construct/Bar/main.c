#include <stdio.h>
#include <stdlib.h>

//Viet app nhap vao nam sinh, sau do tra loi rang du tuoi vao quan bar hay ko
//>= 18 dc vao bar

//De giai quyet bai toan ta can gi?
//INPUT: tuoi, thi can nam sinh
//-> Can co bien, luu value cho input!!!

//PROCESS: xu li gi???
//			co nam sinh ta ra tuoi
//			quyet dinh vao bar hay ko va thong bao!!!

//OUTPUT: can xuat ket qua gi? cho vao bar hoac ko!!!


int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Welcome to Thie^n -Du+o+`ng Bar\n");
	printf("Please show your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2022 - yob; //cong thuc loai nguoi che ra
	if (age >= 18)	//menh de so sanh da hoc
	{
		printf("Ko say ko ve^`. Say thi` sao ve^`. Let's chill\n");
	}
		
	
	if (age < 18)	//menh de so sanh da hoc
		printf("Hey rich kid. Go home now!!!\n");	
	
	return 0;
}
