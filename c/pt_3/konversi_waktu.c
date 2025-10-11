#include <stdio.h>

int main() {
//	int waktu; //waktu adalah detik
	int hari, jam, menit, detik;
	
	printf("Input waktu = ");
	scanf("%ild", &detik);
	
//	hari = waktu / 86400;
//	sisa = waktu % 86400;
//	
//	jam = waktu / 3600;
//	sisa = waktu % 3600;
//	
//	menit = sisa / 60;
//	detik = sisa % 60;

	menit = detik / 60;
	detik = detik % 60;
	
	jam = menit / 60;
	menit = menit % 60;
	
	hari = jam / 24;
	jam = jam % 24;
	
	printf("detik awal %i = %i hari %i jam %i menit %i detik", detik, hari, jam, menit);
}

//output("detik awal = hari jam menit detik", waktu, hari, jam, menit, detik)
