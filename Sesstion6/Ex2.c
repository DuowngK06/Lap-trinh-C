#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    do {
        printf("Nhap mot so bat ky: ");
        scanf("%d", &guess);

        if (guess != secret) {
            printf("Sai roi, thu lai nhe!\n");
        }

    } while (guess != secret);

    printf("Chuc mung, ban da doan dung!\n");

    return 0;
}