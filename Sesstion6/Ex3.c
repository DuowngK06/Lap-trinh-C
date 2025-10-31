//
// Created by my pc on 10/29/2025.
//
#include <stdio.h>
int main() {
    int N, tong = 0;
    printf("Nhap vao so nguyen duong :");
    scanf("%d", &N);
    if (N <=0) {
        printf("Nhap vao so nguyen duong\n");
        return 1;
    }
    for (int i = 0; i < N; i++) {
        tong+=i ;
        printf("%d\n", tong);
    }
    return 0;
}