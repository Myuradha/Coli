#include <stdio.h>

int nim; //nim
char nama[100]; //nama user
int gol; //golongan user [1/2/3]
char stat[100]; //status user [menikah/cerai/belum menikah]
//int anak; //jumlah anak user

int gaji;

int main() {
	printf("Masukkan NIM anda : ");
	scanf("%i", &nim);
	
	printf("Masukkan Nama anda : ");
	scanf("%s", &nama);
	
	golongan();
	
	printf("NIM : %i\n", nim);
	printf("Nama anda : %s\n", nama);
	printf("Gaji anda : RP.%i", gaji);
}

int golongan() {
	printf("Masukkan golongan anda [1/2/3]: ");
	scanf("%i", &gol);
	
	if (gol == 1) {
		gaji = 20;
	}
	else if (gol == 2) {
		gaji = 40;
	}
	else if (gol == 3) {
		gaji = 60;
	}
}

int status() {
	if ()
}
