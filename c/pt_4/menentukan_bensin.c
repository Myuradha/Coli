#include <stdio.h>

int main() {
    int bahan_bakar;

    printf("[1 - Pertalite] | [2 - Pertamax] | [3 - Bio Solar]\n");
    printf("Pilih bahan bakar[1/2/3]: ");
    scanf("%i", &bahan_bakar);

    if(bahan_bakar == 1) {
        printf("Anda memilih bahan bakar Pertalite");
    }
    else if(bahan_bakar == 2) {
        printf("Anda memilih bahan bakar Pertamax");
    }
    else if(bahan_bakar == 3) {
        printf("Anda memilih bahan bakar Bio Solar");
    }
    else {
        printf("Hanya dapat menginput 1, 2, dan 3");
    }

    return 0;
}

/*
PROGRAM menentukan_bahan_bakar

KAMUS
    var bahan_bakar : interger

ALGORITMA
    output("[1 - Pertalite] | [2 - Pertamax] | [3 - Bio Solar]")
    output("Pilih bahan bakar[1/2/3]: ")
    input(bahan_bakar)

if (bahan_bakar == 1) then
    output("Anda memilih bahan bakar Pertalite")
else if (bahan_bakar == 2) then
    output("Anda memilih bahan bakar Pertamax")
else if (bahan_bakar == 3) then
    output("Anda memilih bahan bakar Bio Solar")
else
    output("Hanya dapat menginput 1, 2, dan 3")
endif
endif
*/