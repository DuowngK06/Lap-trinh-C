#include <stdio.h>

int main() {
    int n, value, count = 0;


    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];


    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    // Tìm kiếm tuần tự và đếm số lần xuất hiện
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }


    if (count > 0)
        printf("%d\n", count);
    else
        printf("0\n");

    return 0;
}
//
// Created by my pc on 11/9/2025.
//
