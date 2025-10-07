#include <stdio.h>

int x;
int cm, m, km, sisa;

int main() {
	printf("Masukkan jarak = ");
	scanf("%i", &x);
	
	km = x / 100000;
	sisa = x % 100000;
	m = sisa / 100;
	cm = sisa % 1000;
	
	printf("%i\n", sisa);
	printf("%ikm + %im + %icm", km, m, cm);
	
}
