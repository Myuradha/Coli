#include <stdio.h>

int bilangan;

int main() {
    printf("Masukkan bilangan : ");
    scanf("%i", &bilangan);

    if(bilangan >= 1) {
        printf("Bilangan Positive");
    }

    else if(bilangan <= -1) {
        printf("Bilangan Negative");
    }
    else {
        printf("Bilangan Nol");
    }
    
    return 0;
}

/*
Program menentukan_bilangan_negative_nol_positive
    {
        IS = nilai belum diketahui {Initial State}
        FS = nilai sudah dapat ditemukan {Final State}
    }

Kamus
    var bil : interger

Algoritma
	{masukkan nilai bilangan}
	output("Masukkan bilangan: ")
	input(bilangan)
	
	if (bilangan > 1) then
		output("Bilangan Positive")
	else if (bilangan < -1) then
		output("Bilangan Negative")
	else then
		output("Bilangan Nol")
	endif
    endif
*/