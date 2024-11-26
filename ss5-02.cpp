#include <stdio.h>

int main() {
    int target = 50;  
    int input;

    printf("nhap so: ");
    
    do {
        scanf("%d", &input);
        if (input != target) {
            printf("ban nhap khong dung: ");
        }
    } while (input != target); 

    printf( "ban da mhap dung so %d.\n", target);
    return 0;
}
