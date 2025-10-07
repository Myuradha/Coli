#include <stdio.h>

int uang; 
int lembar1000, lembar500, lembar100, lembar50, lembar25;

int main() {

    printf("Masukan jumlah uang: ");
    scanf("%d", &uang);
    
    lembar1000 = uang / 1000;
    uang = uang % 1000;
    
    if (lembar500 == 500 || lembar500 <= 499) {
    	lembar500 = uang / 500;
    	uang = uang % 500;
		}
		
//    lembar500 = uang / 500;
//    uang = uang % 500;
    
//    lembar100 = uang / 100;
//    uang = uang % 100;
    
//    lembar50 = uang / 50;
//    uang = uang % 50;
    
//    lembar25 = uang / 25;
//    uang = uang % 25;

    printf("\nHasil Pecahan\n");
    printf("Lembar1000 : %d\n", lembar1000);
    printf("Lembar500 : %d\n", lembar500);
    printf("Lembar100 : %d\n", lembar100);
//    printf("Lembar50 : %d\n", lembar50);
//    printf("Lembar25 : %d\n", lembar25);
    
    return 0;
}
