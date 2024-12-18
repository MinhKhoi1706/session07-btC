#include <stdio.h>

int main() {
    int n;

    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
    printf("nhap phan tu thu %d: ", i + 1);
    scanf("%d", &a[i]);
    }

    printf("cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

