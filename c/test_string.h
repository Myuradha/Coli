#include <stdio.h>

char name[100];

int main() {
	nameInput();
}

int nameInput() {
	printf("Input Name : ");
	scanf("%[^\n]%*c", &name);
	
	printf("name : %s", name);
}
