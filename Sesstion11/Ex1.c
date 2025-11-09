#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

// Hàm nhập số lượng phần tử
int nhapSoLuong() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    return n;
}

// Hàm nhập mảng
    
}

// Hàm hiển thị số nguyên tố
int hienThiSoNguyenTo(int* a, int n) {
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}

// Hàm sắp xếp giảm dần và hiển thị
int sapXepGiamDan(int* a, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

// Hàm tìm kiếm nhị phân
int timKiemNhiPhan(int* a, int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) return mid;
        else if (a[mid] < x) right = mid - 1; // vì mảng giảm dần
        else left = mid + 1;
    }
    return -1;
}


int main() {
    int n = nhapSoLuong();
    int* a = nhapMang(n);
    int luaChon, x;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Hien thi cac so nguyen to\n");
        printf("2. Sap xep giam dan va hien thi\n");
        printf("3. Tim kiem phan tu (tim kiem nhi phan)\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                hienThiSoNguyenTo(a, n);
                break;
            case 2:
                sapXepGiamDan(a, n);
                break;
            case 3:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                sapXepGiamDan(a, n);
                int kq = timKiemNhiPhan(a, n, x);
                if (kq != -1)
                    printf("Tim thay %d tai vi tri %d\n", x, kq);
                else
                    printf("Khong tim thay %d trong mang\n", x);
                break;
            case 0:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (luaChon != 0);

    free(a);
    return 0;
}
