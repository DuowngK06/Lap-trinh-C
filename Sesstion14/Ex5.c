#include <stdio.h>


int giaiThua(int n) {
    int gt = 1;
    for (int i = 1; i <= n; i++) {
        gt = gt * i;
    }
    return gt;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("Giai thua cua %d la: %d\n", n, giaiThua(n));

    return 0;
}
