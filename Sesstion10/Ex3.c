#include <stdio.h>

int main() {
    int n, x, found = -1;


    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];


    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    // Tìm kiếm tuần tự (Linear Search)
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = i;
            break;
        }
    }


    if (found != -1)
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, found);
    else
        printf("Khong tim thay.\n");

    return 0;
}

