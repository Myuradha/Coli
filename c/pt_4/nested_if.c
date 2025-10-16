#include <stdio.h>
#include <string.h>

int fak; 
int prodi; 

int main() {
    printf("Pilih Fakultas = ");
    scanf("%s", &fak);

    printf("Pilih Prodi = ");
    scanf("%s", &prodi);

    if (fak == 1)
    {
        if (prodi == 1)
        {
            printf("Anda masuk kelas FI");
        }
        else if (prodi == 2)
        {
            printf("Anda masuk kelas SI");
        }
        else
        {
            printf("Anda masuk kelas Kimia");
        }
    }

    else
    {
        if (fak == 2)
        {
            if (prodi == 1)
            {
                printf("Anda masuk Akutansi");
            }

            else
            {
                printf("Anda masuk Management");
            }
        }
        
    }
    
    return 0;
}