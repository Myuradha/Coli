#include <stdio.h>

	const float PI = 3.14159;
	
	float radius; //your circle radius
	float area; 
	float circumference;

int main() {
	printf("Enter the radius of the circle = ");
	scanf("%f", &radius);
	
	calculation();
	
	printf("Area of the circle = %.3f\n", area);
	printf("Circumference of the circle = %.3f", circumference);
}

int calculation() {
	area = PI * radius * radius;
	circumference =  2 * PI * radius;
}
