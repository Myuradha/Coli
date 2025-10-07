#include <stdio.h>

int main() {
    int uang; 
		int lembar1000, lembar500, lembar100, lembar50, lembar25;

    printf("Masukan jumlah uang: ");
    scanf("%d", &uang);
    
    lembar1000 = uang / 1000;
    uang = uang % 1000;
		
    lembar500 = uang / 500;
    uang = uang % 500;
    
    lembar100 = uang / 100;
    uang = uang % 100;
    
    lembar50 = uang / 50;
    uang = uang % 50;
    
    lembar25 = uang / 25;
    uang = uang % 25;

    printf("\nHasil Pecahan\n");
    printf("Lembar1000 : %d\n", lembar1000);
    printf("Lembar500 : %d\n", lembar500);
    printf("Lembar100 : %d\n", lembar100);
    printf("Lembar50 : %d\n", lembar50);
    printf("Lembar25 : %d\n", lembar25);
    
    return 0;
}

/*Program membaca_nilai_uang
	{Program ini akan membaca nilai uang menjadi pecahan Rp1000, Rp500, Rp100, Rp50, Rp25}

Kamus
	lembar1000, lembar500, lembar100, lembar50, lembar25 : interger

Algoritma
	{masukkan jumlah uang}
	output("Masukkan jumlah uang: ")
	input(uang)
	
	{menghitung pecahan uang}
	lembar1000 = uang div 1000
	uang = uang mod 1000
	
	lembar500 = uang div 500
	uang = uang mod 500
	
	lembar100 = uang div 100
	uang = uang mod 100
	
	lembar50 = uang div 50
	uang = uang mod 50
	
	lembar25 = uang div 25
	uang = uang mod 25
	
	{tampilkan pecahan uang}
	output("lembar1000 = ", lembar1000)
	output("lembar500 = ", lembar500)
	output("lembar100 = ", lembar100)
	output("lembar50 = ", lembar50)
	output("lembar25 = ", lembar25)
*/
