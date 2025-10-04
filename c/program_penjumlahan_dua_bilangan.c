//Program penjumlahan_dua_bilangan

#include <stdio.h>

int main() {
	int bil_a, bil_b, hasil_add, hasil_sub, hasil_mul;
	float hasil_div;
	
	printf("Masukkan nilai bilangan 1 = ");
	scanf("%i", &bil_a);
	
	printf("Masukkan nilai bilangan 2 = ");
	scanf("%i", &bil_b);
	
	hasil_add = bil_a + bil_b; //add
	hasil_sub = bil_a - bil_b; //subtract
	hasil_mul = bil_a * bil_b; //multiple
	hasil_div = (float) bil_a / bil_b; //division
	
	printf("Hasil %i + %i = %i\n", bil_a, bil_b, hasil_add);
	printf("Hasil %i - %i = %i\n", bil_a, bil_b, hasil_sub);
	printf("Hasil %i * %i = %i\n", bil_a, bil_b, hasil_mul);
	printf("Hasil %i / %i = %-10.2f\n", bil_a, bil_b, hasil_div);
	
	return 0;
}
