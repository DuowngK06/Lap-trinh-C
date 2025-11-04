#include <stdio.h>

int main() {
    int arr[5] = {1, 7, 4, 9, 10};
    int i, coChan = 0;

    printf("Cac so chan trong mang la: ");
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            coChan = 1;
        }
    }

    if (!coChan)
        printf("Mang khong chua so chan");

    printf("\n");
    return 0;
}
