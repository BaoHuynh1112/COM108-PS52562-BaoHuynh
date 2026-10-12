#include <stdio.h>

void hoanVi(int *a, int *b) {
    int tam = *a;
    *a = *b;
    *b = tam;
}

int main() {
    int x, y;

    printf("Nhap hai so: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Du lieu nhap khong hop le.\n");
        return 1;
    }

    hoanVi(&x, &y);

    printf("Hai so sau khi hoan vi la: %d %d\
        
        n", x, y);

        
    return 0;
}