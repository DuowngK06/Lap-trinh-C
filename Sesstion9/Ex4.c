#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int tong = 0;

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        tong += arr[i]; // cộng dồn vào tổng
    }

    // Tính giá trị trung bình (phải ép kiểu float để ra số thực)
    float trungBinh = (float)tong / n;


    printf("Gia tri trung binh cua cac phan tu la: %.2f\n", trungBinh);

    return 0;
}
