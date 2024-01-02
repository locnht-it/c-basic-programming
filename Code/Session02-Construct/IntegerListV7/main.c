#include <stdio.h>
#include <stdlib.h>

//Vong lap vo tan, vo cuc
//In cac so tu nhien tu 1..100


int main(int argc, char *argv[]) {
	
	printf("The list of numbers from 1 to 100\n");
	
	int count = 1;
	
	for (;;) //ko khoi dau, ko ket thuc, ko dem gi ca
	{
		printf("%d ", count);
		count++;
		if (count == 1001)
			break;	//dieu kien thoat dat trong for
	}	

	return 0;
}
