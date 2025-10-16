//Program jumlah_ kelahiran_penduduk
#include<stdio.h>
int main() {

//kamus
	int jumlah,kelahiran,berimigrasi,kematian,berimigrasi_keluar;
	//menentukan jumlah kelahiran
	printf("masukan jumlah kelahiran = ");
	scanf("%i",&kelahiran);
	//menentukan jumlah berimigrsi
	printf("masukan jumlah berigrimasi = ");
	scanf("%i",&berimigrasi);
	//menetukan jumlah kematian
	printf("masukan jumlah kematian = ");
	scanf("%i",&kematian);
	//menetukan jumlah berimigrasi_keluar
	printf("masukan jumlah berimigrasi_keluar = ");
	scanf("%i",&berimigrasi_keluar);
	//menghitung keseluruhan jumlah
	jumlah = kelahiran + berimigrasi - kematian - berimigrasi_keluar;
	//tampilkan jumlah keseluruhan penduduk
	printf("%i",jumlah);
	
	return 0;
}
	
	
