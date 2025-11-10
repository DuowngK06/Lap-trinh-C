#include <stdio.h>


int tinhTong(int a, int b) {
    int cong = a + b;
    return cong;
}

int main() {
    int a, b, ketQua;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    ketQua = tinhTong(a, b);
    printf("Tong cua %d va %d la: %d\n", a, b, ketQua);
    return 0;
}
