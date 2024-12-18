#include <stdio.h>

int main() {
    int a[5];

    printf("nhap 5 phan tu cho mang:\n");
    for(int i = 0; i < 5; i++) {
        printf("nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
	printf("\n");
    for(int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

