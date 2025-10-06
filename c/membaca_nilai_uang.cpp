#include <stdio.h>

int uang;

int main() {
	printf("Masukkan nilai uang = Rp.");
	scanf("%i", &uang);
	
	if(uang == 1000) {
		printf("1000");
	}
	else if( uang > 1000 && uang < 500 ) {
		printf("500");
	}
	else if(uang > 500 && uang < 100) {
		printf("100");
	}
	else if(uang > 100 && uang < 50) {
		printf("50");
	}
	else {
		
	}
}
