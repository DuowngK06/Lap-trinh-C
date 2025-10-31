//
// Created by my pc on 10/29/2025.
//
#include <stdio.h>

int main() {
    int n;


    do {
        printf("Nhap mot so tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Loi! Vui long nhap so trong khoang 1 den 10.\n");
        }

    } while (n < 1 || n > 10);  // lặp lại nếu người dùng nhập sai


    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
