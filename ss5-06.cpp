#include <stdio.h>

int main() {
    int num1, num2, choice;

    while (1) {
       
        printf("nhap so thu nhat: ");
        scanf("%d", &num1);
        printf("nhap so thu hai: ");
        scanf("%d", &num2);

        printf("\ncalculator\n");
        printf("1. tong 2 so\n");
        printf("2. hieu 2 so\n");
        printf("3. tich 2 so\n");
        printf("4. thuong 2 so\n");
        printf("5. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("tong cua %d va %d la: %d\n\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("hieu cua %d va %d la: %d\n\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("tich cua %d va %d la: %d\n\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("thuong cua %d va %d la: %.2f\n\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("loi! khong the chia cho 0.\n\n");
                }
                break;
            case 5:
                printf("thoat chuong trinh.\n");
                return 0;
            default:
                printf("lua chon khong hop le! vui long chon lai.\n\n");
        }
    }

    return 0;
}

