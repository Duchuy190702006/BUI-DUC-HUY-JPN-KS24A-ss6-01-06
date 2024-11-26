#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("nhap moi so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("nhap mot so nguyen duong!\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("tong so tu 1 den: %d\n", n, sum);
    return 0;
}
