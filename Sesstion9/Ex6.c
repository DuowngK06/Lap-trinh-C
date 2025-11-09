#include <stdio.h>

int main() {
    int n, x, found = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị cần tìm
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);

    // Tìm x trong mảng
    printf("\nGia tri %d xuat hien tai vi tri: ", x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i + 1); // vị trí tính từ 1
            found = 1;
        }
    }

    if (!found)
        printf("Khong co trong mang.\n");
    else
        printf("\n");

    return 0;
}

