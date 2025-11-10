#include <stdio.h>


int timMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int a[] = {3, 8, 2, 10, 6};
    int n = 5;

    int lonNhat = timMax(a, n);
    printf("So lon nhat trong mang la: %d\n", lonNhat);

    return 0;
}
