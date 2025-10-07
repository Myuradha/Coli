#include <stdio.h>

int V = 40; //kecepatan
int S = 10; //jarak
int t;

int main() {
	t = S / V;
	
	printf("waktu tempuh = %d", t);
	
	return 0;
}

//program menghitung waktu tempuh
/*Kamus
	waktu, jarak, kec : real
algoritma
	{menentukan nilai jarak}
	output("Menentukan nilai jarak tempuh =")
	input(jarak)
	
	{menentukan nilai jarak}
	output("Menentukan nilai kecepatan =")
	input(kecepatan)
	
	{menghitung waktu tempuh}
	waktu <-- kecepatan / jarak
	
	{tampilkan nilai waktu tempuh}
	output("Waktu yang dibutuhkan = ", waktu)*/
