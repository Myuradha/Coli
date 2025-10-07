//Program Konversi_Uang_Rupiah_ke_Dollar
#include <stdio.h>

const float kurs = 16590.0;
float rupiah, dollar;

int main() {
	printf("Masukkan jumlah rupiah = ");
	scanf("%f", &rupiah);
	
	dollar = rupiah / kurs;
	
	printf("Hasil Konversi Rupiah ke Dollar = %f", dollar);
	
	return 0;
}
