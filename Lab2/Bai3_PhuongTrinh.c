#include <stdio.h>
int main (){
    int a,b;
    float x;
    printf ("\nNhap so a :");
    scanf("%d",&a);

    printf ("\nNhap so b :");
    scanf ("%d",&b);

    x=(float)-b/a;
    printf ("\nVay nghiem cua phuong trinh x=%.2f ",x);
    return 0;

}