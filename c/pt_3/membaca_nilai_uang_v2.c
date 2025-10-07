#include <stdio.h>

int main() {
    int uang = 0;
	int ribu = 0; 
	int ratus = 0;
	int puluh = 0; 
	int dualima = 0;

    printf("Masukan jumlah uang: ");
    scanf("%i", &uang);

    if (uang >= 1000) 
    {
        ribu = uang / 1000;
        uang = uang % 1000;
    }
    if (uang >= 100)
    {
        ratus = uang / 100;
        uang = uang % 100;
    }
    if (uang >= 50) 
    {
        puluh = uang / 50;
        uang = uang % 50;
    }
    if (uang >= 25) 
    {
        dualima = uang / 25;
        uang = uang % 25;
    }

    printf("Hasil\n");
    printf("1000 : Rp.%i\n", ribu);
    printf("100 : Rp.%i\n", ratus);
    printf("50 : Rp.%i\n", puluh);
    printf("25 : Rp.%i\n", dualima);
    printf("\nSisa : Rp.%i\n", uang);
    
    return 0;
}

/*
Program membaca_nilai_uang
	{Program ini akan membaca nilai uang menjadi pecahan Rp1000, Rp500, Rp100, Rp50, Rp25}

Kamus
	ribu <-- 0 : interger
	ratus <-- 0 : interger
	puluh <-- 0 : interger
	dualima <-- 0 : interger

Algoritma
	{masukkan jumlah uang}
	output("Masukkan jumlah uang: ")
	input(uang)
	
	{menghitung pecahan uang}
	if (uang >= 1000) then
		ribu <-- uang / 1000
		uang <-- uang mod 1000
	

	if (uang >= 100) then
		ribu <-- uang / 100
		uang <-- uang mod 100
	
	if (uang >= 50) then
		ribu <-- uang / 50
		uang <-- uang mod 50
	
	if (uang >= 25) then
		ribu <-- uang / 25
		uang <-- uang mod 25
	
	{tampilkan pecahan uang}
	output("ribu = Rp.", ribu)
	output("ratus = Rp.", ratus)
	output("puluh = Rp.", puluh)
	output("dualima = Rp.", dualima)
	output("Sisa = Rp.", uang)
*/
