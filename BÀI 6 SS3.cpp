#include <stdio.h>

int main() {
    float side, height, area;

    printf("Nhap do dai canh cua tam giac: ");
    scanf("%f", &side);
    
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);
    
    area = (side * area)/2;
    printf("Dien tich cua tam giac la: %f\n", area);
    
    return 0 ;
}

