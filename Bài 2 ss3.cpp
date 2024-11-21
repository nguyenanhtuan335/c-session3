#include <stdio.h>

int main() {
    float C, F;

    printf("Nhap nhiet do theo do C: ");
    scanf("%f", &C);

    // Công thuc chuyen doi tu C sang F
    F = (C * 9 / 5) + 32;

    printf("Nhiet do theo do F la: %d\n", F);

    return 0;
}
