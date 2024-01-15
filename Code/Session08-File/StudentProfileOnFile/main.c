#include <stdio.h>
#include <stdlib.h>

//Hom nay ta se luu 1 ho so sinh vien xuong tap tin.
//-> Write/tao tap tin voi data duoc luu lai

//Ngay mai ta se mo ho so nay ra xem.
//-> Doc thong tin tu tap tin dem vao RAM xu li tiep

void saveAChar();
void openAChar(); //mo tap tin char.txt de xem no co gi, xem = code, ko xem = Notepad
				  //in ra man hinh!!! READ VAO RAM CTRL - OPEN

void openChars(); //doc nhieu hon 1 ki tu, vi tap tin se co 
				  //nhieu ki tu, ham doc tap tin fgetc() chi doc 1 
				  //ki tu tu dau tap tin, roi thoi
				  //muon doc nhieu ki tu, goi ham nay nhieu lan
				  //tuc la LOOP!!!

void openCharsV2(); //ham tren lay loi, goi 2 lan lenh doc 1 ki tu
					//fgetc() fgetc()
					//bai tho co 1000 tu, thi chet moe, phai lap thoi
					//fgetc() 1000 lan

void saveADocument(); //ham luu luon 1 doan van. Doan van nhap tu 
					  //ban phim. Nang cap so voi save 1 ki tu.

void openADocument();

int main(int argc, char *argv[]) {
	//saveAChar();
	//openAChar();
	//openChars();
	//openCharsV2();
	//saveADocument();
	openADocument();
	return 0;
}

void saveAChar() {
	char ch = '$'; //luu dau $ xuong tap tin
	FILE* f = fopen("char.txt", "a"); //tro vao 1 day byte
									  //de san sang save data
									  //w: tao moi tap tin tren dia
									  //neu tap tin co san, trung ten
									  //xoa tap tin cu, lam moi cung ten
									  //HET SUC LUU Y KHI CHOI W
	//"a" append: nhe nhang hon, tinh te hon, ko tho bao nhu "w"
	//a: neu tap tin chua co, thi tao moi
	//	 neu co roi, giu data cu, data moi noi vao duoi, cuoi tap tin
	//CO 1 TINH HUONG KO XIN DUOC CON TRO, F KO TRO DUOC VAO DAY BYTE
	//LUC NAY f == NULL, y nghia la con tro ko tro vao duoc day byte cua tap tin
	//gio ta coi nhu la xin duoc, tap trung vao viec luu info

	fprintf(f, "%c", ch); //neu muon ghi nhieu ki tu, thi nhieu fprintf()
	//xai nhu printf() xua nay, printf() thi in ra man hinh, fprintf() in ra file

	fclose(f); //bao OS da xong tap tin
									  
}

void openAChar() {
	char ch;
	FILE* f = fopen("char.txt", "r"); //em muon xem tap tin - read
	//nho kiem tra f co NULL ko, tinh sau, coi nhu cham duoc tap tin
	
	ch = fgetc(f); //ham doc 1 ki tu tu tap tin, tra ve ma ASCII
	
	printf("The char.txt contents: %c\n", ch);
	
	fclose(f);
	
}

void openChars() {
	char ch;
	FILE* f = fopen("char.txt", "r");
	
	printf("The char.txt contents:\n");
	//doc 1 ki tu roi in ra
	ch = fgetc(f); //doc xong 1 ki tu, co con tro ngam tu nhich qua ki tu ke trong dia
	printf("%c", ch);
	
	//doc them 1 ki tu nua ke ben roi in ra
	ch = fgetc(f);
	printf("%c", ch);
	
	fclose(f);
		
}

void openCharsV2() {
	char ch;
	FILE* f = fopen("char.txt", "r");
	
	printf("The char.txt contents:\n");
	
	do {
		ch = fgetc(f);	//doc xong 1 ki tu, co con tro ngam
		printf("%c", ch);
	} while (ch != EOF); //chua bang EOF thi doc tiep di
	
	fclose(f);
	
}

//go 1 doan van tu ban phim, luu xuong dia 
//kho: khi nao thi ket thuc nhap??? dau hieu nao de biet dung nhap!!!
//dung ki tu $ # cung la 1 cach, ko hay vi $# cung la ki tu xung dang xuat hien trong van ban
//trong 1 ngu canh nao do
//co cach de ket thuc ma ko anh huong content da go
//ki tu danh dau ma ko anh huong noi dung!!!
//Ctrl-S choi ngau luon!!! dung ket thuc viec nhap
//tim cach bat cum phim Ctrl-S cum phim, chu ko phai chu S don le
//Nhung to hop phim Ctrl-S, Ctrl-phim-nao-do duoc goi la NON-PRINTABLE
//go ma ko in ra man hinh, go mang y nghia lenh nao do, tin hieu nao do
//theo thiet ke PC, thi to hop phim cung phai co mot ma so nao do
//may con biet lam gi tiep!!!
//to hop phim cung co ma so - con so chong lung!
//Ctrl-S ung voi ma so: 19

//minh go bai tho, go cai don: scanf() phai nhan enter sau moi cu go
//con loai lenh khac: cu go, se gan bien, ma chua can nhan enter
//getchar();
void saveADocument() {
	
	char ch; //don tung ki tu tu ban phim
	
	FILE* f = fopen("don-doi-nganh.txt", "w"); //a cx dc
	printf("You are required to input a document. Ctrl-S to stop & save your work\n");
	do {
		ch = getchar(); //cu go, ko can nhan enter
		//co duoc tung ki roi, day ra tap tin ngay
		//fprintf(f, "%c", ch);
		fputc(ch, f); //y chang lenh fprintf();
		
	} while (ch != 19); //con chua go to hop Ctrl-S thi cu go nhap tiep di
				//nhap den dau thi in ra tap tin den do
				//lenh fprintf() chay lien tuc cho tung ki tu...
				//ko thich lenh fprintf() dung lenh khac
				//vi du fputc();
	
	fclose(f);
	printf("The document is saved successfully\n");
}

void openADocument() {
	char ch;
	FILE* f = fopen("don-doi-nganh.txt", "r");
	do {
		ch = fgetc(f);
		printf("%c", ch);
	} while (ch != EOF);
	
	fclose(f);
}
