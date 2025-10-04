//program menghitung waktu tempuh

#include <stdio.h>
#include <conio.h>

int main() {
	
//Kamus
	double waktu, jarak, kecepatan;
	
//algoritma
//{menentukan nilai jarak}
	printf("Menentukan nilai jarak tempuh = ");
	scanf("%lf", &jarak);
	
//	{menentukan nilai jarak}
	printf("Menentukan nilai kecepatan = ");
	scanf("%lf", &kecepatan);
	
//	{menghitung waktu tempuh}
	waktu = kecepatan / jarak;
	
//	{tampilkan nilai waktu tempuh}
	printf("Waktu yang dibutuhkan = %.3lf\n", waktu);
	
	//getch();	
	return 0;
}
