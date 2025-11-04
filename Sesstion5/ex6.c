#include <stdio.h>

int main() {
    float a, b, ketQua;
    char op;

    printf("Nhap so a: ");
    scanf("%f", &a);

    printf("Nhap so b: ");
    scanf("%f", &b);

    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            ketQua = a + b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '-':
            ketQua = a - b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '*':
            ketQua = a * b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0\n");
            else {
                ketQua = a / b;
                printf("Ket qua: %.2f\n", ketQua);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
            break;
    }

    return 0;
}
