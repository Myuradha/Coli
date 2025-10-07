#include <stdio.h>

int a;
int b;

int main() {
	printf("a = ");
	scanf("%i", &a);
	
	printf("b = ");
	scanf("%i", &b);
	
	int score = a - b;
	
	printf("score a subtract wih b = %i", score);
	
	return 0;
}
