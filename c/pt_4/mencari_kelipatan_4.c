#include <stdio.h>

int angka;
int jawab;

int main() {
  scanf("%i", &angka);
  
  jawab = angka % 4;
  
  if (angka % 4 == 0)
  {
  	printf("jawab = %i\n", jawab);
    printf("angka %i adalah kelipatan 4\n", angka);
  }
  else
  {
    printf("angka %i bukan kelipatan 4\n", angka);
  }
}
