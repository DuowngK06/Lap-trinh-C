#include <stdio.h>

int main() {
    int arr[5] = {12, 5, 8, 20, 3};
    int i, max = arr[0], min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}
