#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int even_number = 0;

    printf("cac so chan trong mang la:\n");
    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
            even_number = 1;
        }
    }

    if(!even_number) {
        printf("mang khong chua so chan");
    }

    return 0;
}

