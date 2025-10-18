#include <stdio.h>

int main() {
	short ks; //short interger 8bit
	int ki; //interger 16bit
	long kl; //long interger 32bit
	char c; //character 'I'
	float x; //float 0.1
	
	ks = 1;
	ki = 10;
	kl = 10000;
	c = 'z';
	x = 1.55;
	
	printf("Karakter %c\n", c);
	printf("Bilangan short interger %d\n", ks);
	printf("Bilangan interger %d\n", ki);
	printf("Bilangan long interger %d\n", kl);
	printf("Bilangan desimal %f\n", x);
	
	return 0;
}
