#include <stdio.h>

int benda;
float inchi, kaki, yard;

int main() {
	printf("Masukkan ukuran benda (meter) = ");
	scanf("%i", &benda);
	
	inchi = benda / 0.0254;
	kaki = benda / 0.3048;
	yard = benda / 0.9144;
	
	printf("inchi = %.3f\n", inchi);
	printf("kaki = %.3f\n", kaki);
	printf("yard = %.3f\n", yard);
	
	return 0;
}

/*
Program konversi_meter_ke_inchi_kaki_yard
	{program mengkonversi ukuran benda ke inchi, kaki, yard}

Kamus
	benda : interger
	inchi, kaki, yard : real
	
Algoritma
	{tentukan ukuran benda}
	output("Masukkan ukuran benda (meter) = ")
	input(benda)
	
	{mengkonversi ukuran benda}
	inchi <-- benda / 0.0254
	kaki <-- benda / 0.3048
	yard <-- benda / 0.9144
	
	{tampilkan ukuran benda}
	output("inchi = ", inchi)
	output("kaki = ", kaki)
	output("yard = ", yard)
*/	
