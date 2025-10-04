#include <stdio.h>

int main() {
    // Kamus
    int bil_a, bil_b;
    int tambah, kurang, kali;
    float bagi;

    // Input
    printf("Masukkan nilai bil_a = ");
    scanf("%d", &bil_a);

    printf("Masukkan nilai bil_b = ");
    scanf("%d", &bil_b);

    // Proses
    tambah = bil_a + bil_b;
    kurang = bil_a - bil_b;
    kali = bil_a * bil_b;
	bagi = bil_a / bil_b;

    // Output
    printf("\nHasil Operasi:\n");
    printf("%d + %d = %d\n", bil_a, bil_b, tambah);
    printf("%d - %d = %d\n", bil_a, bil_b, kurang);
    printf("%d * %d = %d\n", bil_a, bil_b, kali);
    printf("%d / %d = %.2f\n", bil_a, bil_b, bagi);

    return 0;
}
