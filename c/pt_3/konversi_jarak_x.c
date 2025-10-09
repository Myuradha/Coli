#include <stdio.h>

int x = 0;
int cm, m, km, sisa;

int main() {
	printf("Masukkan jarak x = ", &x);
//	scanf("%i", &x);
	
	km = x / 100000;
	sisa = x % 100000;
	m = sisa / 100;
	cm = sisa % 100;
	
	printf("%ikm + %im + %icm", km, m, cm);
}

/*
Program konversi_jarak_x
	{program mengkonversi nilai jarak x ke dalam km, m, cm}

Kamus
	x <-- 0 : interger
	cm, m, km, sisa : interger
	
Algoritma
	{menentukan nilai x}
    output("Masukkan nilai x = ")
    input(x)
    
    km <-- x / 100000;
    sisa <-- x mod 100000;
    m <-- sisa / 100;
    cm <-- sisa mod 100;
    
	{menampilkan nilai x}
    output("km + m + cm = ", km, m, cm)
*/
