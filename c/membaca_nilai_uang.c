#include <stdio.h>

int uang, ribu, ratus, puluh, dualima;

int main() {
	uang = 100000;
	
	ribu = 1000;
	ratus = 100;
	puluh = 50;
	dualima = 25;
	
	printf("Masukkan jumlah uang : ");
	scanf("%d", &uang);
	
	if (uang >= 1000) {
		ribu = uang / 1000;
		uang = uang % 1000;
	} 
	if (uang >= 500) {
		ribu = uang / 500;
		uang = uang % 500;
	}
	if (uang >= 100) {
		ribu = uang / 100;
		uang = uang % 100;
	}
	if (uang >= 50) {
		ribu = uang / 50;
		uang = uang % 50;
	}
	if (uang >= 25) {
		ribu = uang / 25;
		uang = uang % 25;
	}
	
	printf("\nHasil Konversi\n");	
	printf("Lembar 1000 : %i\n", ribu);
	printf("Lembar 500 : %i\n", ratus);
	printf("Lembar 100 : %i\n", puluh);
	printf("Lembar 50 : %i\n", dualima);
	printf("Sisa uang : Rp.%i", uang);
	
	return 0;
}
