#include <stdio.h>

int suhu;

int main() {
    printf("Inputkan Suhu : ");
    scanf("%i", &suhu);

    if((suhu > 0) && (suhu <= 100)) {
        printf("Benda cair");
    } 
    else if(suhu > 100) {
        printf("Benda gas");
    } 
    else {
        printf("Benda Padat");
    }

    printf(" : %i", suhu);

    return 0;
}