#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }

    if (sum == original)
        printf("La so Armstrong\n");
    else
        printf("Khong phai la so Armstrong\n");

    return 0;
}
