#include <stdio.h>

int main() {
	int x = 0, hari, bulan, tahun, sisa;
	scanf("%i", &x);	
	printf("Masukkan hari = ");

	
	tahun = x / 365;
	sisa = x % 365;
	
	bulan = sisa / 30;
	hari = sisa % 30;
	
	
	printf("proyek %i hari = %i tahun, %i bulan, %i hari",x , tahun, bulan, hari);
	
	return 0;
	
}
