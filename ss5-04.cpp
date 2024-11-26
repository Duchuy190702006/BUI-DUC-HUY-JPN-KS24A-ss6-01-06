#include <stdio.h>

int main() {
    int n;

    printf("nhap mot so nguyen duong tu 1 den 10 ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("nhap so nguyen duong tu 1 den 10 \n");
        return 1;
    }

    printf("bang cuu chuong  %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
