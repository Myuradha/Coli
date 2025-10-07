//Program Konversi_Uang_Rupiah_ke_Dollar
#include <stdio.h>

float kurs = 16590.0;
float rupiah, dollar;

int main() {
	printf("Masukkan jumlah rupiah = ");
	scanf("%f", &rupiah);
	
	dollar = rupiah / kurs;
	
	printf("Hasil Konversi Rupiah ke Dollar = %.2f", dollar);
	
	return 0;
}
