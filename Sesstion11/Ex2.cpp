//
// Created by my pc on 11/5/2025.
//
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isEven = false;
    int n = 10;

    if (n % 2 == 0) {
        isEven = true;
    }

    if (isEven)
        printf("%d la so chan.\n", n);
    else
        printf("%d la so le.\n", n);

    return 0;
}
