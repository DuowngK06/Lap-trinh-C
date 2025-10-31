#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap chieu dai m: ");
    scanf("%d", &m);
    printf("Nhap chieu rong n: ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
