/**/

#include <stdio.h>

int main() {
	const float PI = 3.14;
	float r, luas;
	
	printf("Jari-jari lingkaran = ");
	scanf("%f", &r);
	
	luas = PI * r * r;
	
	printf("\nLuas lingkaran dengan jari-jari %.2f = %.2f\n", r, luas);
	
	return 0;
}
