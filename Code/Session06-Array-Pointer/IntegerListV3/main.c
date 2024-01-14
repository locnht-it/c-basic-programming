#include <stdio.h>
#include <stdlib.h>

//

int main(int argc, char *argv[]) {
	
	int a[5] = {5, -10, -15, 20, -25};
	
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);
	
	//ten mang la bien/bien con tro/chot so nha thang dau mang
	//hoi Hari co gi, em co vi, co toa do vi. Xem vi co gi *hari
	printf("a stores/holds the value: %u\n", a);
	
	//khi tui biet ten mang la con tro, tro thang dau day
	//tui co the vao nha thang dau day *hari
	printf("a[0] = %d\n", *a); //5
	
	printf("a[1] = %d\n", *(a + 1)); //-10
	
	//sua value mang dc ko, dc, so dc bien thi du suc sua
	//a[1] = 69;
	
	*(a + 1) = 69; //tu dau mang, +1 dia chi, vao dia chi do
				   //sua value, a[1] = 69;
	
	printf("Array after 69\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; address: %u\n", i, a[i], &a[i]);			   
	
	//a++; //a phai luon chot dau day, a = &a[0];
		 //ten mang la 1 bien con tro/luu dia chi thang &a[0];
	//++ chui lien, may la con tro, ko cho tro lung tung!!!
	
	//choi thu voi Hari cai coi, con tro tu do, tro lung ++ thoai mai
	int* hari;
	//hari = ???; //can 1 dia chi ai do!!! &ai-do
	//hari = &a[0]; &a[1]; okie heng
	hari = a; //!!! vi ten mang chinh la dia chi &a[0]			   
	
	//in thu mang cai coi, qua Hari!!!
	printf("The array has values (via Hari):\n");
	for (int i = 0; i < 5; i++)
		//printf("%d\t", *(hari + i)); //hari van chot dau mang nhu a
		printf("%d\t", *(hari++));
		//printf("%d\t", *(a + i)); //vua hoc hom qua va vua on
		//printf("%d\t", a[i]);
		
	//tin dc ko sau khi for xong, hari tro phan tu cuoi, tin ko???
	printf("\nBelieve or not? Hari now points to: %u\n", --hari);
	printf("Believe or not? The last element of array: %d\n", *hari); //-25
	
	return 0;
}
