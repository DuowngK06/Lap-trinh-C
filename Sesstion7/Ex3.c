#include <stdio.h>

int main() {
    int n, temp, dao = 0;

    printf("Nhap n: ");
    scanf("%d", &n);


    if (n < 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 0;
    }


    temp = n;


    while (temp > 0) {
        dao = dao * 10 + temp % 10;
        temp /= 10;
    }


    if (dao == n)
        printf("%d la so doi xung.\n", n);
    else
        printf("%d khong phai la so doi xung.\n", n);

    return 0;
}
