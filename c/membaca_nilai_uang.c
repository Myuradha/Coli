#include <stdio.h>

int main() {
    int uang, ribu, ratus, puluh, dualima = 0;

    printf("Masukan jumlah uang: ");
    scanf("%d", uang);

    if (uang >= 1000)
    {
        uang = uang % 1000;
        ribu = uang / 1000;
    }
    if (uang >= 100)
    {
        uang = uang % 100;
        ratus = uang / 100;
    }
    if (uang >= 50)
    {
        uang = uang % 50;
        puluh = uang / 50;
    }
    if (uang >= 25)
    {
        uang = uang % 25;
        dualima = uang / 25;
    }

    printf("\nHasil");
    printf("1000 : %d\n", ribu);
    printf("1000 : %d\n", ratus);
    printf("1000 : %d\n", puluh);
    printf("1000 : %d\n", dualima);
    printf("Sisa : %d", uang);

}