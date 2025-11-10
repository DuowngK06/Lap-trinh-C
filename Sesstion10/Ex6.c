#include <stdio.h>

int main() {
    int n;


    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Thuật toán Bubble Sort có tối ưu dừng sớm
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; // cờ kiểm tra có hoán đổi hay không

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // hoán đổi arr[j] và arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // có hoán đổi xảy ra
            }
        }

        // nếu không có hoán đổi nào, mảng đã được sắp xếp => dừng sớm
        if (swapped == 0)
            break;
    }


    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
